#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a == 3) {

        cout << 15 << endl;
        cout << (b - 4 - 1) << endl;
        cout << 45;
	} else if (b == 3) {

        cout << 30 << endl;
        cout << (c - 4 - 1) << endl;
        cout << 30;
	} else if (c == 3) {

        cout << 45 << endl;
        cout << (d - 4 - 1) << endl;
        cout << 15;
	} else if (d == 3) {

        cout << 0 << endl;
        cout << (a - 4) << endl;
        cout << 0;
	}

	return 0;
}
