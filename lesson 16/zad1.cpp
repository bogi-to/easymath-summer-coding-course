#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int counter = 0;
	int counter2 = 0;

	for (int i = 2; i + 2 <= n; i++) {
        counter = 0;
        counter2 = 0;

        for (int j = 1; j <= i + 2; j++) {
            if (i % j == 0) {
                counter++;
            }

            if ((i + 2) % j == 0) {
                counter2++;
            }
        }

        if (counter == 2 && counter2 == 2 && i + 2 <= n) {
            cout << i << " " << i + 2 << endl;
        }
	}

	return 0;
}
