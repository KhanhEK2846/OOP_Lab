#include "PhanSo.h"

istream& operator>>(istream& in, PhanSo& a)
{
	cout << "Nhap tu so: ";
	in >> a.Tu;
	cout << "Nhap mau so: ";
	in >> a.Mau;
	a.ThapPhan = (float)a.Tu / a.Mau;
	return in;
}

PhanSo PhanSo::operator+(PhanSo a)
{
	PhanSo b;
	b.Tu = a.Mau * Tu + a.Tu * Mau;
	b.Mau = a.Mau * Mau;
	return b;
}


PhanSo PhanSo::operator-(PhanSo a)
{
	PhanSo b;
	b.Tu = a.Mau * Tu - a.Tu * Mau;
	b.Mau = a.Mau * Mau;
	return b;
}

PhanSo PhanSo::operator*(PhanSo a)
{
	PhanSo b;
	b.Tu = Tu * a.Tu;
	b.Mau = Mau * a.Mau;
	return b;
}

PhanSo PhanSo::operator/(PhanSo a)
{
	int tmp = a.Tu;
	a.Tu = a.Mau;
	a.Mau = tmp;
	return *(this) * a ;
}

PhanSo::PhanSo(int m, int n)
{
	Tu = m;
	Mau = n;
	ThapPhan = (float)m / n;
}


ostream& operator<<(ostream& out, PhanSo& a)
{
	if (a.Mau == 0) cout << "Phan so khong ton tai" << endl;
	else
	{
		if (a.Mau < 0)
		{
			a.Tu = -a.Tu;
			a.Mau = -a.Mau;
		}
		if (a.Mau == 1) out << a.Tu << endl;
		else
		{
			if (a.Tu == 0) out << a.Tu << endl;
			else
			{
				int m = a.Tu, n = a.Mau;
				if (m < 0) m = -m;
				if (n < 0)n = -n;
				while (m != n) m > n ? m -= n : n -= m;
				a.Tu = a.Tu / m;
				a.Mau = a.Mau / m;
				if (a.Mau == 1) cout << a.Tu << endl;
				else
					cout << a.Tu << "/" << a.Mau << endl;



			}
		}

	}
	return out;
}

PhanSo::~PhanSo()
{

}


