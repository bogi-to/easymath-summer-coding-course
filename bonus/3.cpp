#include<iostream>
using namespace std;

int main()
{
	int n, sum, max_num = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
        int number;
        cin >> number;

        sum += number;

        if (number > max_num) {
            max_num = number;
        }
    }

	int sum_without_max_num = sum - max_num;
	int diff = max_num - sum_without_max_num;

	if (max_num == sum_without_max_num) {
        cout << "Yes" << endl;
        cout << "Sum = " << max_num;
	}
	else {
        cout << "No" << endl;
        cout << "Diff = " << diff;
	}

	return 0;
}

