#include "Time.h"

istream& operator>>(istream& in, Time& a)
{
	cout << "Nhap so gio: ";
	in >> a.h;
	cout << "Nhap so phut: ";
	in >> a.m;
	cout << "Nhap so giay: ";
	in >> a.s;
	return in;
}

ostream& operator<<(ostream& out, Time& a)
{
	while (a.s >= 60)
	{
		++a.m;
		a.s -= 60;
	}
	while (a.m >= 60)
	{
		++a.h;
		a.m -= 60;
	}

	if (a.h != 0) cout << a.h << "h ";
	if (a.m != 0) cout << a.m << "m ";
	cout << a.s << "s " << endl;
	return out;
}

Time::Time()
{
	s = h = m = 0;
}

int Time::Second()
{
	int b;
	b = h * 3600 + m * 60 + s;
	return b;
}

Time Time::operator+(Time b)
{
	Time c;
	c.s = this->Second() + b.Second();
	return c;
}

Time Time::operator-(Time b)
{
	Time a;
	a.s = this->Second() - b.Second();
	if (a.s < 0) a.s = -a.s;
	return a;
}

Time Time::operator++()
{
	int a = this->Second();
	h = m = 0;
	s = a+1;
	return *this;
}

Time Time::operator--()
{
	int a = this->Second();
	h = m = 0;
	s = a - 1;
	return *this;
}
