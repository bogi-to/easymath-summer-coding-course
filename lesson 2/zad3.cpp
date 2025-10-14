#include<bits/stdc++.h>
using namespace std;
int main()
{
	int p1, p2;
	cin >> p1 >> p2;

	int last_1, first_2;
	last_1 = p1 % 10;
	first_2 = p2 / 10;

	if (last_1 == first_2) {
        cout << p1 << "*" << p2 % 10;
	} else {
        cout << p1 << p2;
	}

	return 0;
}
