#include<bits/stdc++.h>
using namespace std;
int main()
{
	int length, width, height, length1, width1, length2, width2;
	cin >> length >> width >> height >> length1 >> width1 >> length2 >> width2;

	bool ok1 = false, ok2 = false;

	if (length1 - length >= 4 && width1 - width >= 4) {
        ok1 = true;
	}

	if (length2 - length >= 4 && width2 - width >= 4) {
        ok2 = true;
	}

	if (ok1 == true && ok2 == true) {
        int s1, s2;
        s1 = length1 * width1;
        s2 = length2 * width2;

        if (min(s1, s2) == s1) {
            cout << 1 << " " << s1;
        } else {
            cout << 2 << " " << s2;
        }
	} else if (ok1 == true) {
        cout << 1;
	} else if (ok2 == true) {
        cout << 2;
	} else {
        cout << 0;
	}

	return 0;
}
