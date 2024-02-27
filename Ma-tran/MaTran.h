#pragma once
#include<iostream>
using namespace std;

class MaTran
{
private:
	int cot, dong;
	int** mt;
	static int sl;
public:
	int GetCot()
	{
		return cot;
	}
	void SetCot(int c)
	{
		cot = c;
	}
	int GetDong()
	{
		return dong;
	}
	void SetDong(int d)
	{
		dong = d;
	}
	void Nhap();
	void Xuat();
	MaTran(int d = 1,int c=1);
	MaTran(const MaTran& x);
	~MaTran();
	void Tong(MaTran x);
	void Hieu(MaTran x);
	void Tich(MaTran x);
};

