#include"DSPhanSo.h"

int main()
{
    PhanSo a,b,c;
    cin >> a;
    cin >> b;
    c = a + b;
    cout << "Tong hai phan so: " << c << endl;
    c = a - b;
    cout << "Hieu hai phan so: " << c << endl;
    c = a * b;
    cout << "Tich hai phan so: " << c << endl;
    c = a / b;
    cout << "Thuong hai phan so: " << c << endl;
    DSPhanSo d;
    cin >> d;
    cout << d;
    d.TongPhanSo();
    d.LonNhat();
    d.NhoNhat();
    d.SapXepDanhSachTangDan();
    cout << d;
    d.SapXepDanhSachGiamDan();
    cout << d;
}


