#include<bits/stdc++.h>
using namespace std;
int main()
{
	int day, month, year;
	cin >> day >> month >> year;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day > 31) {
            cout << "No" << endl << 31;
        } else {
            cout << "Yes" << endl;

            day += 1;

            month += day % 31;
            day %= 31;

            if (day == 0) {
                day++;
            }

            year += month % 12;
            month %= 12;

            if (month == 0) {
                month++;
            }

            cout << day << " " << month << " " << year;
        }
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day > 30) {
            cout << "No" << endl << 30;
        } else {
            cout << "Yes" << endl;

            day += 1;

            month += day % 31;
            day %= 31;

            if (day == 0) {
                day++;
            }

            cout << day << " " << month << " " << year;
        }
	} else if (month == 2) {
        if (day > 29) {
            cout << "No" << endl << 29;
        } else {
            cout << "Yes" << endl;

            day += 1;

            month += day % 31;
            day %= 31;

            if (day == 0) {
                day++;
            }

            cout << day << " " << month << " " << year;
        }
	} else {
        cout << "No";
	}

	return 0;
}
