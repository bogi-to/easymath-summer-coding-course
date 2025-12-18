#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a, b, c;
	cin >> a >> b >> c;

	int ab, ac, bc, min_;
	ab = abs(a - b);
	ac = abs(a - c);
	bc = abs(b - c);
	min_ = min(min(ab, ac), bc);

	if (min_ == ab) {
        cout << a << " " << b;
	} else if (min_ == ac) {
        cout << a << " " << c;
	} else {
        cout << b << " " << c;
	}

	return 0;
}
