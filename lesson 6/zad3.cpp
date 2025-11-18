#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, m;
	cin >> n;

	int bit;

	while (n) {
        bit = n&1;

        m <<= 1;

        m |= bit;

        n>>= 1;
	}

	cout << m;

	return 0;
}
