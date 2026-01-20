#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int last;
	bool up = true;
	bool down = true;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (i > 0) {
            if (num <= last) {
                up = false;
            }
        }

        if (i > 0) {
            if (num >= last) {
                down = false;
            }
        }

        last = num;
	}

	if (up + down > 0) {
        cout << "Yes";
	} else {
        cout << "No";
	}

	return 0;
}
