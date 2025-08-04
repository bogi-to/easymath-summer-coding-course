#include<iostream>
using namespace std;
int main ()
{
    int month_number;
    cin >> month_number;


    if (month_number == 1) {
        cout << "It's january.";
    } else if (month_number == 2) {
        cout << "It's february.";
    } else if (month_number == 3) {
        cout << "It's march.";
    } else if (month_number == 4) {
        cout << "It's april.";
    } else if (month_number == 5) {
        cout << "It's may.";
    } else if (month_number == 6) {
        cout << "It's june.";
    } else if (month_number == 7) {
        cout << "It's july.";
    } else if (month_number == 8) {
        cout << "It's august.";
    } else if (month_number == 9) {
        cout << "It's september.";
    } else if (month_number == 10) {
        cout << "It's october.";
    } else if (month_number == 11) {
        cout << "It's november.";
    } else if (month_number == 12) {
        cout << "It's december.";
    } else {
        cout << "It's not a month of the year.";
    }


    return 0;
}
