#pragma once
#include<iostream>
#include <math.h>
using namespace std;

class DaThuc
{
private:
	int bcn;
	int* tp;
public:
	friend istream& operator>>(istream& in, DaThuc& a);
	friend ostream& operator<<(ostream& out, DaThuc& a);
	DaThuc();
	DaThuc(const DaThuc& x);
	~DaThuc();
	DaThuc operator+(DaThuc a);
	DaThuc operator-(DaThuc a);
	DaThuc operator*(DaThuc a);
	float GiaTri();

};



