#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	for (int rows = 0; rows < n; rows++) {
        for (int spaces = 0; spaces < n - (n - rows); spaces++) {
            cout << " ";
        }

        for (int stars = 0; stars < (n * 2 - 1) - rows * 2; stars++) {
            cout << "*";
        }

        cout << endl;
	}

	return 0;
}
