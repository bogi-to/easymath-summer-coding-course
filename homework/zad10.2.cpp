#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0;

	for (int i = 100; i <= 999; i++) {
        int ones, tens, hundreds;
        ones = i % 10;
        tens = (i / 10) % 10;
        hundreds = i / 100;

        if (ones == hundreds && i % 3 == 0) {
            counter++;
        }
	}

	cout << counter;

	return 0;
}
