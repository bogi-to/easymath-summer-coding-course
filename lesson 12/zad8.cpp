#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, min_ = 2100000000, last;
	cin >> n;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (i != 0 && abs(num - last) < min_) {
            min_ = abs(num - last);
        }

        last = num;
	}

	cout << min_;

	return 0;
}
