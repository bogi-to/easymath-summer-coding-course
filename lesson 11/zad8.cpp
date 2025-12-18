#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a, b, c, x;
	cin >> a >> b >> c >> x;

	int skip = x - 'a' + 1;
	char aa, bb, cc;

	aa = a + skip;

	if (aa > 'z') {
        aa -= 26;
	}

	bb = b - skip;

	if (bb < 'A') {
        bb += 26;
	}

	cc = c + (skip % 10);

	if (cc > '9') {
        cc -= 10;
	}

	cout << aa << " " << bb << " " << cc;

	return 0;
}
