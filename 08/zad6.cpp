#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0;

	for (int i = 1000; i <= 9999; i++) {
        int ones, tens, hundreds, thousands;
        ones = i % 10;
        tens = (i / 100) % 10;
        hundreds = (i / 10) % 10;
        thousands = i / 1000;
        if (thousands + hundreds == tens + ones) {
            cout << i << endl;
            counter ++;
        }
	}

	cout << counter;

	return 0;
}
