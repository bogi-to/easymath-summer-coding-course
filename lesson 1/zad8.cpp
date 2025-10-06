#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c, c_;
	cin >> c >> c_;

	cout << abs(c - c_) - 1;

	cout << "(";

	for (int i = min(c, c_) + 1; i < max(c, c_); i++) {
        char letter = i;

        if (i < max(c, c_) - 1) {
           cout << letter << ",";
        } else {
            cout << letter;
        }

	}

	cout << ")";

	return 0;
}
