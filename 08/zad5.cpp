#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;

	int result = 0;

	while (n > 0) {
        int last_num = n % 10;
        n /= 10;
        result = result * 10 + last_num;
	}

	cout << result;

	return 0;
}
