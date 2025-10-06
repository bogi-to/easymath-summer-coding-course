#include<bits/stdc++.h>
using namespace std;
int main()
{
	int num;
	cin >> num;

	int fifty = 0, twenty = 0, ten = 0, five = 0, two = 0, one = 0;

	fifty = num / 50;
	num %= 50;

	twenty = num / 20;
	num %= 20;

	ten = num / 10;
	num %= 10;

	five = num / 5;
	num %= 5;

	two = num / 2;
	num %= 2;

	one = num / 1;
	num %= 1;

	if (fifty > 0) {
        cout << fifty << "x50 ";
	}

	if (twenty > 0) {
        cout << twenty << "x20 ";
	}

	if (ten > 0) {
        cout << ten << "x10 ";
	}

	if (five > 0) {
        cout << five << "x5 ";
	}

	if (two > 0) {
        cout << two << "x2 ";
	}

	if (one > 0) {
        cout << one << "x1 ";
	}

	return 0;
}
