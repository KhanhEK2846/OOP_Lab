#pragma once
#include "PhanSo.h"

class DSPhanSo
{
private:
	int SoLuong;
	PhanSo* listPhanSo;
public:
	friend istream& operator>>( istream& in, DSPhanSo &a);
	friend ostream& operator<<(ostream& out, DSPhanSo& a);
	void TongPhanSo();
	void LonNhat();
	void NhoNhat();
	void SapXepDanhSachTangDan();
	void SapXepDanhSachGiamDan();

};
