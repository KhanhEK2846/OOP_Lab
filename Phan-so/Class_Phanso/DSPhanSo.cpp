#include "DSPhanSo.h"
istream& operator>>(istream& in, DSPhanSo &a)
{
	cout << "Nhap so luong so phan so: ";
	in >> a.SoLuong;
	a.listPhanSo = new PhanSo[a.SoLuong];

	for (int i = 0; i < a.SoLuong; i++)
		in>>a.listPhanSo[i];
	return in;
}

ostream& operator<<(ostream& out, DSPhanSo& a)
{
	for (int i = 0; i < a.SoLuong; i++)
		out<<a.listPhanSo[i];
	return out;
}

void DSPhanSo::TongPhanSo()
{
	PhanSo a;
	for (int i = 0; i < SoLuong; i++)
		a = a+ listPhanSo[i];
	cout << "Tong phan so trong danh sach: ";
	cout << a;
}

void DSPhanSo::LonNhat()
{
	float a = this->listPhanSo[0].GetThapPhan();
	int b = 0;
	for (int i = 1; i < SoLuong; i++)
		if (a < this->listPhanSo[i].GetThapPhan())
		{
			a = this->listPhanSo[i].GetThapPhan();
			b = i;
		}
	cout << "Phan so lon nhat trong danh sach: ";
	cout<<listPhanSo[b];

}

void DSPhanSo::NhoNhat()
{
	float a = this->listPhanSo[0].GetThapPhan();
	int b = 0;
	for (int i = 1; i < SoLuong; i++)
		if (a > this->listPhanSo[i].GetThapPhan())
		{
			a = this->listPhanSo[i].GetThapPhan();
			b = i;
		}
	cout << "Phan so nho nhat trong danh sach: ";
	cout<<listPhanSo[b];

}

void DSPhanSo::SapXepDanhSachTangDan()
{
	for (int i = 0; i < SoLuong - 1; i++)
	{
		for (int j = i + 1; j < SoLuong; j++)
			if (listPhanSo[i].GetThapPhan() > listPhanSo[j].GetThapPhan())
			{
				PhanSo a = this->listPhanSo[i];
				this->listPhanSo[i] = this->listPhanSo[j];
				this->listPhanSo[j] = a;
			}
	}
	
}

void DSPhanSo::SapXepDanhSachGiamDan()
{
	for (int i = 0; i < SoLuong - 1; i++)
	{
		for (int j = i + 1; j < SoLuong; j++)
			if (listPhanSo[i].GetThapPhan() < listPhanSo[j].GetThapPhan())
			{
				PhanSo a = this->listPhanSo[i];
				this->listPhanSo[i] = this->listPhanSo[j];
				this->listPhanSo[j] = a;
			}
	}
}
