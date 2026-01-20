#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, counter = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num > 0) {
            counter++;
        }
	}

	if (counter == 1) {
        cout << "Yes";
	} else {
        cout << "No";
	}

	return 0;
}
