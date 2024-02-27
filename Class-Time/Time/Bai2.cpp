#include"Time.h"

int main()
{
    Time a,b,c;
    cin >> a;
    cin >> b;
    cout << a;
    cout << a.Second() <<"s "<< endl;
    cout << b;
    cout << b.Second() <<"s "<< endl;
    c = a + b;
    cout << "Tong: " << c << endl;
    c = a - b;
    cout << "Hieu: " << c << endl;
    c = ++a;
    cout << c << endl;
    c = --b;
    cout << c << endl;

}


