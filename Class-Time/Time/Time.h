#pragma once
#include<iostream>
using namespace std;

class Time
{
private:
	int h, m, s;
public:
	Time();
	friend istream& operator>>(istream& in, Time& a);
	friend ostream& operator<<(ostream& out, Time& a);
	int Second();
	Time operator+(Time b);
	Time operator-(Time b);
	Time operator++();
	Time operator--();
};

