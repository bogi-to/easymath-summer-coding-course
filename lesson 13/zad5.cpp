#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int min_ = 1000000000, max_ = -1000000000;
	int sum = 0;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        sum += num;

        if (num < min_) {
            min_ = num;
        }

        if (num > max_) {
            max_ = num;
        }
	}

	sum -= min_;
	sum -= max_;

	cout << sum;

	return 0;
}
