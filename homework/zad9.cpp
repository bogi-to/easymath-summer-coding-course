#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	cin >> a;

	if (a == 1 || a == 2) {
        cout << 1;
        return 0;
	}

	int last, last_last;
	last = 1;
	last_last = 1;
	int now = 0;

	while (a >= now) {
        now = last + last_last;
        last_last = last;
        last = now;
	}

	cout << now;

	return 0;
}
