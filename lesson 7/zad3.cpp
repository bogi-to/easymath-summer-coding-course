#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n1, n2, k;
	char c1, c2;

	cin >> n1 >> c1 >> n2 >> c2 >> k;

	if (c1 == 'A') {
        cout << min(k, n1);
	} else {
        if (k <= n1) {
            cout << 0;
        } else {
            cout << max (k - n1, 0);
        }
	}

	return 0;
}
