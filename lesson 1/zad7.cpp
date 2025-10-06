#include<bits/stdc++.h>
using namespace std;
int main()
{
	double price;
	cin >> price;

	double a, b, c;
	a = price * 0.9;
	b = price * 1.5;

	if (price >= 100) {
        c = price - 20;
	} else {
        c = price;
	}

	if (min(min(a, b), c) == a) {
        cout << "Best choice is A";
	} else if (min(min(a, b), c) == b) {
        cout << "Best choice is B";
	} else {
        cout << "Best choice is C";
	}

	return 0;
}
