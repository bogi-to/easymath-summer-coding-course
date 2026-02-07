#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int i = 1; i < n + 1; i++) {
        int counter = 0;

        for (int j = 1; j < i + 1; j++) {
            if (i % j == 0) {
                counter++;
            }
        }

        if (counter == 2) {
            if (n % i != 0) {
                cout << i << " ";
            }
        }
	}

	return 0;
}
