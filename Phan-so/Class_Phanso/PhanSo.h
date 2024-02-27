#pragma once
#include <iostream>
using namespace std;


class PhanSo
{
private:
	int Tu, Mau;
	float ThapPhan;
public:
	int GetTu()
	{
		return Tu;
	}
	void SetTu(int t)
	{
		Tu = t;
	}
	int GetMau()
	{
		return Mau;
	}
	void SetMau(int m)
	{
		Mau = m;
	}
	friend istream& operator>>(istream &in, PhanSo &a);
	float GetThapPhan()
	{
		return ThapPhan;
	}
	PhanSo operator + (PhanSo a);
	PhanSo operator -(PhanSo a);
	PhanSo operator * (PhanSo a);
	PhanSo operator / (PhanSo a);
	PhanSo(int m = 0, int n = 1);
	friend ostream& operator<<(ostream& out, PhanSo& a);
	~PhanSo();

};



