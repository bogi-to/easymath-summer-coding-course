#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, sum;
	cin >> n;

	int max_1 = -1000000, max_2 = -1000000;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num > max_1) {
            max_2 = max_1;
            max_1 = num;
        }
	}

	sum = max_1 + max_2;

	cout << sum;

	return 0;
}
