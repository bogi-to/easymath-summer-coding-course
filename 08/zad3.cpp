#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin >> k;

	int sum = 1;

	while (k > 0) {
        int last_num = k % 10;
        sum *= last_num;
        k = k / 10;
	}

	cout << sum;

	return 0;
}
