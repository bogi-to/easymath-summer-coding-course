#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, min_ = 1000000000;
	cin >> n;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (abs(num) < min_) {
            min_ = abs(num);
        }
	}

	cout << min_;

	return 0;
}
