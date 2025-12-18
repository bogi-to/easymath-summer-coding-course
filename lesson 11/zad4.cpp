#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a, b, c;
	cin >> a >> b >> c;

	int a_int, b_int, c_int;
	a_int = a;
	b_int = b;
	c_int = c;

	if (a_int + b_int > c_int && a_int + c_int > b_int && b_int + c_int > a_int) {
        cout << "YES";
	} else {
        cout << "NO";
	}

	return 0;
}
