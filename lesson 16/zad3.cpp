#include<bits/stdc++.h>
using namespace std;
int sum_of_numbers (int n) {
    int sum = 0;

    while (n > 0) {
        sum += n % 10;

        n /= 10;
    }
}

bool magical (int a, int b) {
    if (7 * sum_of_numbers(a) == b) {
        return true;
    } else {
        return false;
    }
}

int main()
{
	int a, b;

	for (int i = 0; i < 3; i++) {
        cin >> a >> b;

        if (magical(a, b) == true) {
            cout << "Yes";
        } else {
            cout << "No";
        }
	}


	return 0;
}
