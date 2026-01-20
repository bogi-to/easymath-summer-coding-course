#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, x = 0, best, max_sum = -1;
	cin >> n;

	for (int i = 0; i < n; i++) {
        cin >> x;

        int temp = abs(x);
        int sum = 0;

        while (temp > 0) {
            sum += temp % 10;
            temp /= 10;
        }

        if (sum > max_sum) {
            max_sum = sum;
            best = abs(x);
        }
	}

	cout << best;

	return 0;
}
