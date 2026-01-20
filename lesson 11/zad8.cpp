#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a, b, c, x, end_a, end_b, end_c;
	cin >> a >> b >> c >> x >> end_a >> end_b >> end_c;

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

	if (end_a == aa && end_b == bb && end_c == cc) {
        cout << "Yes";
	} else {
        cout << "No " << aa << " " << bb << " " << cc;
	}

	return 0;
}
