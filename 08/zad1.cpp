#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int nums = 0;

	while (n > 0) {
        n /= 10;
        nums++;
	}

	cout << nums;

	return 0;
}
