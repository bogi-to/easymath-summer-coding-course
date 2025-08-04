#include<iostream>
using namespace std;

int main()
{
    int day_number;
    cin >> day_number;

    switch (day_number) {
        case 1:
            cout << "It's monday.";
            break;

        case 2:
            cout << "It's tuesday.";
            break;

        case 3:
            cout << "It's wednesday.";
            break;

        case 4:
            cout << "It's thursday.";
            break;

        case 5:
            cout << "It's friday.";
            break;

        case 6:
            cout << "It's saturday.";
            break;

        case 7:
            cout << "It's s.";
            break;

        default:
            cout << "It's not a day of the week.";
    }

    return 0;
}
