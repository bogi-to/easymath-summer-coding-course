#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a, b, c;
	cin >> a >> b >> c;

	int letters = 0;

	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        letters++;
	}

	if ((b >= 'a' && b <= 'z') || (b >= 'A' && b <= 'Z')) {
        letters++;
	}

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        letters++;
	}

	cout << letters;

	return 0;
}
