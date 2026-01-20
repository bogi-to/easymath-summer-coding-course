#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int counter = 0;

	for (int i = 1; i < n + 1; i++) {
        if (n % i == 0) {
            counter++;
        }
	}

	cout << counter;

	return 0;
}
