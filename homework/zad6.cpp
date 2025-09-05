#include<bits/stdc++.h>
using namespace std;
int main()
{
	for (int i = 1000; i <= 9999; i++) {
        int ones, tens, hundreds, thousands;
        ones = i % 10;
        tens = (i / 10) % 10;
        hundreds = (i / 100) % 10;
        thousands = i / 1000;

        if ((hundreds == ones && thousands == tens) && (hundreds != thousands && ones != tens)) {
            int ab = thousands * 10 + hundreds;

            if (ab == thousands * hundreds + hundreds + thousands) {
                cout << ab << ab << endl;
            }
        }
	}

	return 0;
}
