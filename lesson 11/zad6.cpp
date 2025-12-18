#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a, b;
	cin >> a >> b;

	int num = a - '0';
	int pos = b - 'a' + 1;

	int sum = num * pos;

	cout << sum;

	return 0;
}
