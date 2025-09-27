#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int a = i, b = j;

            while (b != 0) {
                int t = a % b;
                a = b;
                b = t;
            }

            cout << a << " ";
        }

        cout << endl;
	}

	return 0;
}
