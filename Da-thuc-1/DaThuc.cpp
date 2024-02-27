#include "DaThuc.h"

void DaThuc::Nhap()
{
	cout << "Nhap bac cao nhat cua da thuc: ";
	cin >> bcn;
	++bcn;
	tp = new int[bcn];
	for (int i = bcn-1; i>=0; i--)
	{
		cout << "Nhap co so cho x^" << i << ": ";
		cin >> tp[i];
		cout << '\n';
	}
}

void DaThuc::Xuat()
{	
	cout << "f(x)= ";
	int a = 0;
	for (int i = bcn - 1; i >= 0; --i)
	{
		if (tp[i] == 0) continue;
		if (tp[i] == 1)
		{
			if (i > 1) cout << "x^" << i;
			if (i == 1) cout << "x";
			if (i == 0) cout << tp[i];
		}
		else
		{
			if (i > 1) cout <<tp[i]<< "x^" << i;
			if (i == 1) cout <<tp[i]<< "x";
			if (i == 0) cout << tp[i];
		}
		if (i != 0)
		{
			if (i == 1)
				if (tp[i - 1] != 0) cout << " + ";
				else {}
			else
				cout << " + ";
		}
	}
	cout << endl;
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
	for (int i = bcn-1; i >= 0; --i)
		this->tp[i] = x.tp[i];
}

DaThuc::~DaThuc()
{
	
}

void DaThuc::Tong(DaThuc a)
{
	int l,n;
	if (this->bcn > a.bcn) 
	{
		l = this->bcn; n = a.bcn;
	}
	else
	{
		l = a.bcn;
		n = this->bcn;
	}
	DaThuc b;
	b.bcn = l;
	b.tp = new int[l];
	for (int i = l - 1; i >= 0; --i)
	{
		if (i >= n )
		{
			if (this->bcn > a.bcn) b.tp[i] = tp[i];
			else b.tp[i] = a.tp[i];
		}
		else
		if(i<=n-1 && i>=0)
		{
			b.tp[i] = a.tp[i] + tp[i];
		}
	}
	cout << "Tong hai da thuc: ";
	b.Xuat();

}

void DaThuc::Hieu(DaThuc a)
{
	int l, n;
	if (this->bcn > a.bcn)
	{
		l = this->bcn; n = a.bcn;
	}
	else
	{
		l = a.bcn;
		n = this->bcn;
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
	cout << "Hieu hai da thuc: ";
	b.Xuat();

}

void DaThuc::Tich(DaThuc a)
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
	cout << "Tich hai da thuc: ";
	b.Xuat();
}
