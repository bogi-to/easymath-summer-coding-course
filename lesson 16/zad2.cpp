#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;

	long long num, sum = 0;

	bool aft = true;

	for (int i = 0; i < n; i++) {
        cin >> num;

        long long square = num * num;
        long long temporary = num;
        long long stepen = 1;

        while (temporary > 0) {
            stepen *= 10;
            temporary /= 10;
        }

        if (square % stepen != num) {
            aft = false;
        }

        int ones = num % 10, tens = (num / 10) % 10;

        sum += ones * tens;
	}

	if (aft == true) {
        cout << sum;
	} else {
        cout << 0;
	}

	return 0;
}
