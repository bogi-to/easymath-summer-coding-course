#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t1, t2, t3;
	int h, m, s, c, mm, ss;
	cin >> h >> m >> s >> c >> mm >> ss;

	t1 = h * 3600 + m * 60 + s + c * (mm * 60 + ss) + 10 * 60;

	cin >> h >> m >> s >> c >> mm >> ss;

	t2 = h * 3600 + m * 60 + s + c * (mm * 60 + ss) + 10 * 60;

	cin >> h >> m >> s >> c >> mm >> ss;

	t3 = h * 3600 + m * 60 + s + c * (mm * 60 + ss) + 10 * 60;

	if (t1 >= t2 && t1 >= t3) {
        cout << (t1 / 3600) % 24 << " " << (t1 % 3600) / 60 << " " << (t1 % 60);
	} else if (t2 >= t1 && t2 >= t3) {
        cout << (t2 / 3600) % 24 << " " << (t2 % 3600) / 60 << " " << (t2 % 60);
	} else if (t3 >= t1 && t3 >= t2) {
        cout << (t3 / 3600) % 24 << " " << (t3 % 3600) / 60 << " " << (t3 % 60);
	}

	return 0;
}
