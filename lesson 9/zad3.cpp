#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, h, l, steps = 1;
	char s;

	cin >> n >> h >> l;
	cin >> s;

	for (int j = 0; j < n; j++) {
        for (int i = 0; i < l;  i++) {
            cout << s;

            if (j == 0) {
                cout << s;
            }

            if (j + 1 == n) {
                for (int k = 0; k < h - 2; k++) {
                    cout  << endl << s;
                    for (int c = 0;)
                }
            }
        }
	}

	return 0;
}
