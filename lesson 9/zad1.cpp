#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin >> n;

	long long int last = 1, before_last = 1, sum = 2;

	if (n <= 2) {
        cout << 1;

        return 0;
	}

	for (long long int i = 2; i < n - 1; i++) {
	    before_last = last;
        last = sum;
        sum = before_last + last;
	}

	cout << sum;

	return 0;
}
