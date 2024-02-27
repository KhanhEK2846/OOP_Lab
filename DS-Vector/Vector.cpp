#include "Vector.h"

void Vector::Nhap()
{
	cout << "Nhap so luong so thuc trong vecto: " << endl;
	cin >> n;
	tp = new float[n];
	for (int i = 0; i < n; i++)
	{
		cout << "Nhap so thuc thu " << i + 1 << " : " << endl;
		cin >> tp[i];
	}

}

void Vector::Xuat()
{
	cout << "( ";
	for (int i = 0; i < n; ++i)
	{
		if (i == n - 1)
			cout << tp[i];
		else
			cout << tp[i] << ", ";
	}
	cout << " )" << endl;

}

void Vector::Tong(Vector a)
{
	Vector c;
	int ln, nn;
	if (n > a.n)
	{
		ln = n;
		nn = a.n;
	}
	else
	{
		ln = a.n;
		nn = n;
	}
	c.n = ln;
	c.tp = new float[ln];
	for (int i = 0; i < ln; ++i)
	{
		if (i >= nn)
		{
			if (n > a.n) c.tp[i] = tp[i];
			else c.tp[i] = a.tp[i];
		}
		else
		{
			c.tp[i] = a.tp[i] + tp[i];
		}
	}
	c.Xuat();
}

void Vector::Hieu(Vector a)
{
	Vector c;
	int ln, nn;
	if (n > a.n)
	{
		ln = n;
		nn = a.n;
	}
	else
	{
		ln = a.n;
		nn = n;
	}
	c.n = ln;
	c.tp = new float[ln];
	for (int i = 0; i < ln; ++i)
	{
		if (i >= nn)
		{
			if (n > a.n) c.tp[i] = tp[i];
			else c.tp[i] = -a.tp[i];
		}
		else
		{
			c.tp[i] = -a.tp[i] + tp[i];
		}
	}
	c.Xuat();
}

float Vector::Norn()
{
	float norn = 0;
	for (int i = 0; i < n; ++i)
	{
		norn = norn + pow(tp[i], 2);
	}
	norn = sqrt(norn);
	return norn;
}

Vector::Vector()
{
	n = 1;
	tp = new float[1];
	tp[0] = 0;
}

Vector::~Vector()
{
	delete[]tp;
}

Vector::Vector(const Vector& a)
{
	n = a.n;
	tp = new float[n];
	tp = a.tp;
}
