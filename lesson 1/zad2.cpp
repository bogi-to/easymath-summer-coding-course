#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int loop = 0, max_ = -1;

	while (n > 0) {
        if (n % 10 > max_) {
           max_ = n % 10;
        }

        n /= 10;

        loop++;
	}

	cout << max_ << " " << loop;

	return 0;
}
