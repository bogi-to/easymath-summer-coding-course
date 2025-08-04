#include<iostream>
using namespace std;
main ()
{
    int a;
    int b;

    cin >> a;
    cin >> b;

    cout << a;
    cout << endl;
    cout << b;
    cout << endl;

    int c;

    c = a;
    a = b;
    b = c;

    cout << a;
    cout << endl;
    cout << b;
    cout << endl;

    return 0;

}
