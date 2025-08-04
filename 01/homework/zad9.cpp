#include<iostream>
using namespace std;
main ()
{
    int totalminutes;
    cin >> totalminutes;
    cout << "In the end the hours are: ";
    cout << totalminutes/60;
    cout << endl;
    cout << "The minutes are: ";
    cout << totalminutes%60;
    return 0;
}
