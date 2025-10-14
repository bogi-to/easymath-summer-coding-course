#include<bits/stdc++.h>
using namespace std;
int main()
{
	string card;
	cin >> card;

	int first, second, third, fourth;
	first = ((card[0] - '0') + (card[1] - '0')) % 10;
	second = abs(card[2] - card[3]);

	if ((card[4] - '0') % 2 == 0) {
        third = card[1] - '0';
        fourth = card[2] - '0';
	} else {
        third = card[3] - '0';
        fourth = card[0] - '0';
	}

	cout << first << second << third << fourth;

	return 0;
}
