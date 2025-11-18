 #include<bits/stdc++.h>
using namespace std;
int main()
{
	int length, width, length1, width1, length2, width2, length3, width3;
	cin >> length >> width >> length1 >> width1 >> length2 >> width2 >> length3 >> width3;

	bool ok1 = false, ok2 = false, ok3 = false;
	int cnt = 0;

	if (length1 - length >= 10 && width1 - width >= 10 && abs(length1 - width1) < 150) {
        ok1 = true;

        cnt += 1;
	}

    if (length2 - length >= 10 && width2 - width >= 10 && abs(length2 - width2) < 150) {
        ok2 = true;

        cnt += 1;
	}

	if (length3 - length >= 10 && width3 - width >= 10 && abs(length3 - width3) < 150) {
        ok3 = true;

        cnt += 1;
	}

	if (cnt > 1) {
        int s1 = length1 * width1;
        int s2 = length2 * width2;
        int s3 = length3 * width3;

        if (s1 < s2 && s1 < s3) {
            cout << 1;
        } else if (s2 < s1 && s2 < s3) {
            cout << 2;
        } else if (s3 < s1 && s3 < s2) {
            cout << 3;
        }
	} else if (cnt == 1) {
        if (ok1 == true) cout << 1;
        if (ok2 == true) cout << 2;
        if (ok3 == true) cout << 3;
	} else {
        cout << 0;
	}

	return 0;
}
