#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	int c;

	int high, low;
	high = a&0b11000000;
	low = b&0b00111111;

	c = high|low;

	cout << c;

	return 0;
}
