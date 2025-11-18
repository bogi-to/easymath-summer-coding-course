#include<bits/stdc++.h>
using namespace std;
int main()
{

	for (int hour = 0; hour <= 23; hour++) {
        for (int minute = 0; minute <= 59; minute++) {
            int min_ones, min_tens, hour_ones, hour_tens;
            min_ones = minute % 10;
            min_tens = (minute / 10) % 10;
            hour_ones = hour % 10;
            hour_tens = (hour / 10) % 10;

            if (min_ones + min_tens == hour_ones + hour_tens) {
                cout << hour_tens << hour_ones << ":" << min_tens << min_ones;
                cout << endl;

            }
        }
	}

	return 0;
}
