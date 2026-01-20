#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, num;
	cin >> n;

	int p = 1;

	int negative = 0;

	for (int i = 0; i < n; i++) {
        cin >> num;

        if (num < 0) {
            negative++;

            p *= num;
        }
	}

	if (negative >= 2) {
        cout << p;
	} else {
         cout << 0;
	}

	return 0;
}
