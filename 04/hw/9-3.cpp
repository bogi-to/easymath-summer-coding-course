#include<iostream>
#include<map>
using namespace std;

int main()
{
    int day_number;
    cin >> day_number;

    if (day_number < 1 || day_number > 7) {
        cout << "It's not a day of the week";
        return 0;
    }

    map<int, string> week;

    week[1] = "monday";
    week[2] = "tuesday";
    week[3] = "wednesday";
    week[4] = "thursday";
    week[5] = "friday";
    week[6] = "saturday";
    week[7] = "sunday";

    cout << "It's " << week[day_number];

    return 0;
}
