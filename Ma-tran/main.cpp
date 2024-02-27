
#include "MaTran.h"

int main()
{
	MaTran a,b;
	a.Nhap();
	b.Nhap();
	cout << '\n';
	cout << "Tong hai ma tran vua nhap: " << endl;
	a.Tong(b);
	cout << '\n';
	cout << "Hieu hai ma tran vua nhap: " << endl;
	a.Hieu(b);
	cout << '\n';
	cout << "Tich hai ma tran vua nhap: " << endl;
	a.Tich(b);
	return 0;
}
