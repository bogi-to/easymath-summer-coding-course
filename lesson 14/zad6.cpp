#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int counter;

	for (int i = 1; i < n + 1; i++) {
        if (n % i == 0) {
            counter++;
        }
	}

	if (counter == 2) {
        cout << "Yes";
	} else {
        cout << "No";
	}

	return 0;
}
