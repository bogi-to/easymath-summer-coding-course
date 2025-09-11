#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> results;

	for (int i = 100; i <= 999; i++) {
        int ones, tens, hundreds;
        ones = i % 10;
        tens = (i / 10) % 10;
        hundreds = i / 100;

        if (ones != 0 && tens != 0 && hundreds != 0) {
            if (i % ones == 0 || i % tens == 0 || i % hundreds == 0) {
               results.push_back(i);
            }
        }
	}

	for (int num : results) {
        cout << num << endl;
	}

	cout << "Total nums: " << results.size();

	return 0;
}
