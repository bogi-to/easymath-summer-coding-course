#include<bits/stdc++.h>
using namespace std;
int main()
{
	char letter;
	cin >> letter;

	if (letter >= 'A' && letter <= 'Z') {
        char capital = letter + 32;
        cout << capital;
	}


	return 0;
}
