#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            for (int k = 1; k <= n; k++) {
                if (i * i * i + j * j * j == k * k * k - 1) {
                    cout << i << " " << j << " " << k << endl;
                }
            }
        }
    }

	return 0;
}
