#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int max_ = 0, second_max = 0;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num > max_) {
            second_max = max_;
            max_ = num;
        } else if (num > second_max) {
            second_max = num;
        }
	}

	return 0;
}
