#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;

	int counter = 0;

	for (int i = a - 1; i < b + 1; i++) {
        counter = 0;

        for (int j = 1; j < i + 1; j++) {
            if (i % j == 0) {
                counter++;
            }
        }

        if (counter == 2) {
            cout << i << " ";
        }
	}



	return 0;
}
