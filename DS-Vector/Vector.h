#pragma once
#include<iostream>
#include<math.h>
using namespace std;
class Vector
{
private:
	int n;
	float* tp;
public:
	void Nhap();
	void Xuat();
	void Tong(Vector a);
	void Hieu(Vector a);
	float Norn();
	Vector();
	~Vector();
	Vector(const Vector& a);

};
