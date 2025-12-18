#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, result = n&~(0b1111 << 2);
	cin >> n;

	cout << (int) result;

	return 0;
}
