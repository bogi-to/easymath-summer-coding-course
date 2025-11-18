#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	bool counter = 0;

	while (n != 0) {
        if ((n&1) == 0) {
            n>>= 1;
        } else {
            n -= (n & -n);
        }

        counter = !counter;
	}

	cout << (counter ? "First" : "Second");

	return 0;
}
