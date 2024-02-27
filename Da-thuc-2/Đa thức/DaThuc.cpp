#include "DaThuc.h"

istream& operator>>(istream& in, DaThuc& a)
{
	cout << "Nhap bac cao nhat cua da thuc: ";
	in >> a.bcn;
	++a.bcn;
	a.tp = new int[a.bcn];
	for (int i = a.bcn - 1; i >= 0; i--)
	{
		cout << "Nhap co so cho x^" << i << ": ";
		in >> a.tp[i];
		cout << '\n';
	}
	return in;
}

ostream& operator<<(ostream& out, DaThuc& a)
{
	cout << "f(x)= ";
	for (int i = a.bcn - 1; i >= 0; --i)
	{
		if (a.tp[i] == 0) continue;
		if (a.tp[i] == 1)
		{
			if (i > 1) cout << "x^" << i;
			if (i == 1) cout << "x";
			if (i == 0) out << a.tp[i];
		}
		else
		{
			if (i > 1) out << a.tp[i] << "x^" << i;
			if (i == 1) out << a.tp[i] << "x";
			if (i == 0) out << a.tp[i];
		}
		if (i != 0)
		{
			if (i == 1)
				if (a.tp[i - 1] != 0) cout << " + ";
				else {}
			else
				cout << " + ";
		}
	}
	cout << endl;
	return out;
}

DaThuc::DaThuc()
{
	bcn = 1;

	tp = new int[bcn];
	tp[0] = 0;
}

DaThuc::DaThuc(const DaThuc& x)
{
	bcn = x.bcn;
	tp = new int[bcn];
	for (int i = bcn - 1; i >= 0; --i)
		this->tp[i] = x.tp[i];
}

DaThuc::~DaThuc()
{

}

DaThuc DaThuc::operator+(DaThuc a)
{
	int l, n;
	if (bcn > a.bcn)
	{
		l = bcn; n = a.bcn;
	}
	else
	{
		l = a.bcn;
		n = bcn;
	}
	DaThuc b;
	b.bcn = l;
	b.tp = new int[l];
	for (int i = l - 1; i >= 0; --i)
	{
		if (i >= n)
		{
			if (this->bcn > a.bcn) b.tp[i] = tp[i];
			else b.tp[i] = a.tp[i];
		}
		else
			if (i <= n - 1 && i >= 0)
			{
				b.tp[i] = a.tp[i] + tp[i];
			}
	}
	return b;

}

DaThuc DaThuc::operator-(DaThuc a)
{
	int l, n;
	if (bcn > a.bcn)
	{
		l = bcn; n = a.bcn;
	}
	else
	{
		l = a.bcn;
		n = bcn;
	}
	DaThuc b;
	b.bcn = l;
	b.tp = new int[l];
	for (int i = l - 1; i >= 0; --i)
	{
		if (i >= n)
		{
			if (this->bcn > a.bcn) b.tp[i] = tp[i];
			else b.tp[i] = -a.tp[i];
		}
		else
			if (i <= n - 1 && i >= 0)
			{
				b.tp[i] = -a.tp[i] + tp[i];
			}
	}
	return b;

}

DaThuc DaThuc::operator*(DaThuc a)
{
	DaThuc b;
	b.bcn = this->bcn + a.bcn;
	b.tp = new int[b.bcn];
	for (int i = b.bcn; i >= 0; --i)
	{
		b.tp[i] = 0;
	}
	for (int i = bcn - 1; i >= 0; --i)
	{
		for (int j = a.bcn - 1; j >= 0; --j)
		{
			b.tp[i + j] = b.tp[i + j] + tp[i] * a.tp[j];
		}
	}
	return b;
}

float DaThuc::GiaTri()
{
	int x;
	float a = 0;
	cout << "Nhap gia tri cua x: ";
	cin >> x;

	for (int i = bcn - 1; i >= 0; --i)
	{
		a = a + tp[i] * pow(x, i);
	}
	return a;

}

