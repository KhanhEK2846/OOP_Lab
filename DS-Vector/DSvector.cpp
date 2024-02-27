#include "DSvector.h"

void DSvector::Nhap()
{
	cout << "Nhap so luong vector trong danh sach: " << endl;
	cin >> sl;
	DS = new Vector[sl];
	for (int i = 0; i < sl; ++i)
	{
		cout << "Vector thu " << i + 1 << " :"<<endl;
		DS[i].Nhap();
	}

}

void DSvector::Xuat()
{
	for (int i = 0; i < sl; ++i)
	{
		cout << "Vector thu " << i + 1 << " : ";
		DS[i].Xuat();
		cout << endl;
	}
}

void DSvector::XuatNornTang()
{
	for (int i = 0; i < sl-1 ; ++i)
	{
		for (int j = 1; j < sl; ++j)
		{
			if (DS[i].Norn() > DS[j].Norn())
			{
				Vector tmp = DS[i];
				DS[i] = DS[j];
				DS[j] = tmp;
			}
		}
	}
	this->Xuat();


}
