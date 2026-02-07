#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	int max_;

	for (int i = max(a, b); i < max(a, b) + 1; i--) {
        if (a % i == 0 && b % i == 0) {
            max_ = i;

            break;
        }
	}

	cout << max_;

	return 0;
}
