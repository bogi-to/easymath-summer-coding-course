#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, num;
	cin >> n;

	int min_ = 1000000000, max_ = -1000000000;
	int sum;

	for (int i = 0; i < n; i++) {
        cin >> num;

        if (num < min_) {
            min_ = num;
        }

        if (num > max_) {
            max_ = num;
        }
	}

	sum = min_ + max_;

	cout << sum;

	return 0;
}
