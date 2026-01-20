#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	float max_ = -1, second_max = -1;
	float avg;

	for (int i = 0; i < n; i++) {
        float num;
        cin >> num;

        if (num > max_) {
            second_max = max_;
            max_ = num;
        } else if (num > second_max) {
            second_max = num;
        }
	}

	avg = (max_ + second_max) / 2;

	cout << avg;

	return 0;
}
