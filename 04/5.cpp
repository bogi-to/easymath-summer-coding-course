#include<iostream>
using namespace std;
int main ()
{
    int year;
    cin >> year;

    if (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)) {
        cout << year << " e visokosna.";
    } else cout << year << " NE e visokosna.";

    return 0;
}
