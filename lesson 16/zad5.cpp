#include<bits/stdc++.h>
using namespace std;
float speed(float distance, float time) {
    return distance / time;
}
int main()
{
	float d, t;

	for (int i = 0; i < 5; i++) {
        cin >> d >> t;

        if (speed(d, t) > 90) {
            cout << speed(d, t) << "km/h";
            cout << " Fast" << endl;

        } else {
            cout << speed(d, t) << "km/h";
            cout << " Slow" << endl;

        }
	}

	return 0;
}
