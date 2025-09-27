#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin >> n;

	for (long long i = 1; i <= n; i++) {
        long long num = i * i;

        long t = i;

        bool ok = true;

        while (t > 0) {
            if (t % 10 != num % 10) {
                ok = false;
                break;
            }


        }

        t /= 10;
        num /= 10;

        if (ok == true) {
            cout << i << endl;
        }
	}

	return 0;
}
