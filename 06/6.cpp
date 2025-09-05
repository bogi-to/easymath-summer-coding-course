#include<iostream>
using namespace std;

int main()
{
	int day, month, year;
	cin >> day >> month >> year;

	bool e_visokosna = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;

	if (month >= 1 && month <= 12) {
        if (month == 1 || month == 3 || month == 5 || month == 7 ||
            month == 8 || month == 10 || month == 12 && day <= 31 && day >= 1) {
            cout << "Valid date.";
        } else if (month == 4 || month == 6 || month == 9 || month == 11
        && day <= 30 && day >= 1) {
            cout << "Valid date.";
        } else if (month == 2 && e_visokosna && day >= 1 && day <= 29) {
            cout << "Valid date.";
        } else if (month == 2 && !e_visokosna && day >= 1 && day <= 28) {
            cout << "Valid date.";
        } else {
            cout << "Invalid date.";
        }

}
return 0;
}
