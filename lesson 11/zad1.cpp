#include<bits/stdc++.h>
using namespace std;
int main()
{
	char c;
	int k;

	cin >> c >> k;

	char r = c + (k % 26);

	if (r > 'z') {
        r -= 26;
	}

	cout << r;

	return 0;
}
