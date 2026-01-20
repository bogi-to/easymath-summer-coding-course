#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, a, b;
	cin >> n >> a >> b;

	int counter = 0;

	for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num >= min(a, b) && num <= max(a, b)) {
            counter++;
        }
	}

	cout << counter;

	return 0;
}
