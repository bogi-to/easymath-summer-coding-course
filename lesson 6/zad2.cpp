#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int steps = 0;

	while (n > 1) {
        if ((n&1) == 0) {
            n>>= 1;
        } else {
            n += (n & -n);
        }

        steps++;
	}

	cout << steps;

	return 0;
}
