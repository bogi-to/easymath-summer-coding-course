#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int sum = 1;

	for (int i = 1; i < n + 1; i++) {
        if (n % i == 0) {
            sum *= i;
        }
	}

	cout << sum;

	return 0;
}
