#include<bits/stdc++.h>
using namespace std;
int mirror(int a) {
    int n = 0;

    while (a > 0) {
        n = n * 10 + (a % 10);

        a /= 10;
    }

    return n;
}
int main()
{
	int a, b;

	for (int i = 0; i < 3; i++) {
        cin >> a >> b;

        if (mirror(a) == b) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
	}

	return 0;
}
