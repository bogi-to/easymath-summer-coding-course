#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	if ((n&0b10000000) != 0) {
        cout << "bit 7 is 1";
	} else {
        cout << "bit 7 is 0";
	}

	return 0;
}
