#include<bits/stdc++.h>
using namespace std;

float tax(float price, float percent) {
    return price * percent / 100;
}

int main()
{
	float price, percent;

	for (int i = 0; i < 5; i++) {
        cin >> price >> percent;

        if (tax(price, percent) >= 500) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
	}

	return 0;
}
