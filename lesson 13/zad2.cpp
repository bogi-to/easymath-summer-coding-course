#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d, e;
	int equal_ = 0;

	cin >> a >> b >> c >> d >> e;

	if (a == b) {
        equal_++;
	}

	if (a == c) {
        equal_++;
	}

	if (a == d) {
        equal_++;
	}

	if (a == e) {
        equal_++;
	}

	if (b == c) {
        equal_++;
	}

	if (b == d) {
        equal_++;
	}

	if (b == e) {
        equal_++;
	}

	if (c == d) {
        equal_++;
	}

	if (c == e) {
        equal_++;
	}

	if (d == e) {
        equal_++;
	}

	if (equal_ == 1) {
        cout << "Yes";
	} else {
        cout << "No";
	}

	return 0;
}
