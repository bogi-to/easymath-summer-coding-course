#include<bits/stdc++.h>
using namespace std;
int main()
{
	unsigned int a, b;
	cin >> a, b;

	unsigned int x = a ^ b;
    unsigned int isol = x & -x;

    int pos = 0;
    while ((isol >> pos) != 1) pos++;

    cout << "The first bit is in position: " << pos;

	return 0;
}
