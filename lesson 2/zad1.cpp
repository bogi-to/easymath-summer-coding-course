#include<bits/stdc++.h>
using namespace std;
int main()
{
    int max_ = 0, student;

	for (int i = 1; i <= 3; i++) {
        int start_min, start_hour, end_min, end_hour;
        cin >> start_hour >> start_min >> end_hour >> end_min;

        int diff = (end_hour * 60 + end_min) - (start_hour * 60 + start_min);

        if (diff > max_) {
            max_ = diff;
            student = i;
        }
	}

	int hours, mins;
	hours = max_ / 60;
	mins = max_ % 60;

	cout << student << " " << hours << ":" << setw(2) << setfill('0') << mins;

	return 0;
}
