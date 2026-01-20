#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int max_ = 0;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num > max_) {
            max_ = num;
        }
	}

	cout << max_;

	return 0;
}
