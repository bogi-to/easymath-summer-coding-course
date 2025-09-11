#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int divisors = 0;
	int max_divisors = 0;
	int n_divisors = 0;

	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisors++;
            }
        }

        if (i < n) {
            if (divisors > max_divisors) {
                max_divisors = divisors;
            }

            divisors = 0;
        } else {
            n_divisors = divisors;
        }
	}

	if (max_divisors < n_divisors) {
        cout << "Yes";
	} else {
        cout << "No";
	}

	return 0;
}
