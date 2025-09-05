#include<bits/stdc++.h>
using namespace std;
int main()
{
	for (int i = 100; i <= 999; i++) {
        int ones, tens, hundreds;
        ones = i % 10;
        tens = (i / 10) % 10;
        hundreds = i / 100;

        if (ones == hundreds && i % 3 == 0) {
            cout << i << endl;
        }
	}

	return 0;
}
