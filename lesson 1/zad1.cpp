#include<bits/stdc++.h>
using namespace std;
int main()
{
	string num;
	cin >> num;

	string copy_ = num;
	reverse(copy_.begin(), copy_.end());

	if (num == copy_) {
        cout << "Yes";
	} else {
        cout << "No";
	}

	return 0;
}
