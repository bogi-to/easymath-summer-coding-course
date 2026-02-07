#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int max_;

	for (int i = max(max(a, b), c); i < max(max(a, b), c) + 1; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            max_ = i;

            break;
        }
	}

	cout << max_;

	return 0;
}
