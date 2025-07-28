#include<iostream>
using namespace std;
main ()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout << "a:" << a << " b:" << b;
    cout << endl;

    a = b + a;
    b = a - b;
    a = a - b;

    cout << "a:" << a << " b:" << b;
}
