#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	cin >> c;

	if (c >= 'a' && c <= 'z') {
        cout << "low";
	} else if (c >= 'A' && c <= 'Z') {
        cout << "up";
	} else if (c >= '0' && c <='9') {
        cout << "digit";
	} else {
        cout << "symbol";
	}

	return 0;
}
