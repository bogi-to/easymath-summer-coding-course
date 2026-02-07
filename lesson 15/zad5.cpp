#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	for (int i = max(a, b); i < max(a, b) + 1; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i << " ";
        }
	}

	return 0;
}
