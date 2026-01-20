#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int max_ = 0;
	bool found = false;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num > max_ && num % 2 == 0) {
            found = true;

            max_ = num;
        }
	}

	if (found == true) {
        cout << max_;
	} else {
        cout << "There wasn't an even number in the numbers you wrote.";
	}


	return 0;
}
