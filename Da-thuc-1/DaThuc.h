#pragma once
#include<iostream>
using namespace std;

class DaThuc
{
private:
	int bcn;
	int* tp;
public:
	void Nhap();
	void Xuat();
	DaThuc();
	DaThuc(const DaThuc& x);
	~DaThuc();
	void Tong(DaThuc a);
	void Hieu(DaThuc a);
	void Tich(DaThuc a);
};
