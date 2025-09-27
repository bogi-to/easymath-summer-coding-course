#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	long long max_ = 0, min_ = 9999999999;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num > max_) {
            max_ = num;
        }

        if (num < min_) {
            min_ = num;
        }
	}

	cout << max_ << " " << min_;

	return 0;
}
