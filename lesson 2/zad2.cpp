#include<bits/stdc++.h>
using namespace std;
int main()
{
	char e1, e2, n1, n2, n3, n4, e3, e4;
	cin >> e1 >> e2 >> n1 >> n2 >> n3 >> n4 >> e3 >> e4;

	int sum_digits = (n1 - '0') + (n2 - '0') + (n3 - '0') + (n4 - '0');
	int last_digit = (e1 * e2 * e3 * e4) % 10;

	if (sum_digits == last_digit) {
        cout << "Yes " << sum_digits;
	} else {
        cout << "No";
	}

	return 0;
}
