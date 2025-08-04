#include<iostream>
using namespace std;
int main ()
{
    int day_number;
    cin >> day_number;

    if (day_number == 1) {
        cout << "It's monday.";
    } else if (day_number == 2) {
        cout << "It's tuesday.";
    } else if (day_number == 3) {
        cout << "It's wednesday.";
    } else if (day_number == 4) {
        cout << "It's thursday.";
    } else if (day_number == 5) {
        cout << "It's friday.";
    } else if (day_number == 6) {
        cout << "It's saturday.";
    }else if (day_number == 7) {
        cout << "It's sunday.";
    } else {
        cout << "It's not a day of the week.";
    }



    return 0;
}
