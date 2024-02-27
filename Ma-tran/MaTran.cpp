#include "MaTran.h"

void MaTran::Nhap()
{
	
	cout << "Nhap so dong cho ma tran: " << endl;
	cin >> dong;
	cout << "Nhap so cot cho ma tran: " << endl;
	cin >> cot;
	if (cot <= 0 || dong <= 0) exit(1);
	mt = new int*[dong];
	for (int i = 0; i < dong; i++)
	{
		mt[i] = new int[cot];
	}
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
		{
			cout << "Nhap gia tri tai vi tri [" << i + 1 << " , " << j + 1 << "]: " << endl;
			cin >> mt[i][j];
		}
	}

}

void MaTran::Xuat()
{
	
	for (int i = 0; i < dong; i++)
	{
		for (int j = 0; j < cot; j++)
			cout << mt[i][j] << " ";
		cout << endl;
	}

}

int MaTran::sl = 0;

MaTran::MaTran(int d, int c)
{
	sl++;
	dong = d;
	cot = c;
	mt = new int* [dong];
	for (int i = 0; i < dong; ++i)
	{
		mt[i] = new int[cot];
	}

	for (int i = 0; i < dong; ++i)
	{
		for (int j = 0; j < cot; ++j)
			mt[i][j] = 0;
	}

}

MaTran::MaTran(const MaTran& x)
{
	cot = x.cot;
	dong = x.dong;
	mt = new int* [dong];
	for (int i = 0; i < dong; ++i)
	{
		mt[i] = new int [cot];
	}

	for (int i = 0; i < dong; ++i)
	{
		for (int j = 0; j < cot; ++j)
			mt[i][j] = x.mt[i][j];
	}

}

MaTran::~MaTran()
{
	sl--;
	for (int i = 0; i < dong; i++)
			delete[] mt[i];
	delete mt;
}

void MaTran::Tong(MaTran x)
{
	MaTran t;
	if (this->cot == x.cot && this->dong == x.dong)
	{
		t.dong = x.dong;
		t.cot = x.cot;
		t.mt = new int*[x.dong];
		for (int i = 0; i < x.dong; ++i)
			t.mt[i] = new int[x.cot];

		for (int i = 0; i < x.dong; ++i)
		{
			for (int j = 0; j < x.cot; ++j)
				t.mt[i][j] = this->mt[i][j] + x.mt[i][j];
		}
		t.Xuat();

	}
	else
	{
		cout << "Khong cong duoc. " << endl;
	}
}

void MaTran::Hieu(MaTran x)
{
	MaTran t;
	if (this->cot == x.cot && this->dong == x.dong)
	{
		t.dong = x.dong;
		t.cot = x.cot;
		t.mt = new int* [x.dong];
		for (int i = 0; i < x.dong; ++i)
			t.mt[i] = new int[x.cot];

		for (int i = 0; i < x.dong; ++i)
		{
			for (int j = 0; j < x.cot; ++j)
				t.mt[i][j] = this->mt[i][j] - x.mt[i][j];
		}
		t.Xuat();

	}
	else
	{
		cout << "Khong cong duoc. " << endl;
	}
}

void MaTran::Tich(MaTran x)
{
	if (this->cot == x.dong)
	{
		MaTran t;
		t.dong = this->dong;
		t.cot = x.cot;
		t.mt = new int* [t.dong];
		for (int i = 0; i < t.dong; ++i)
		{
			t.mt[i] = new int[t.cot];
		}

		for (int i = 0; i < t.dong; ++i)
			for (int j = 0; j < t.cot; ++j)
			{
				t.mt[i][j] = 0;
				for (int k = 0; k < this->cot; ++k)
					t.mt[i][j] = t.mt[i][j] + this->mt[i][k] * x.mt[k][j];
			}
		t.Xuat();
	}
	else
		cout << "Khong nhan duoc. " << endl;
}
