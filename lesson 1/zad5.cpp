#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	int aa, bb, cc;
	aa = abs(a - 100);
	bb = abs(b - 100);
	cc = abs(c - 100);

	int min_ = min(aa, min(bb, cc));

	if (min_ == aa) {
        cout << a << " is closest";
	} else if (min_ == bb) {
        cout << b << " is closest";
	} else {
        cout << c << " is closest";
	}

	return 0;
}
