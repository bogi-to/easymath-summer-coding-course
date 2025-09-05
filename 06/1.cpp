#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b + c || b == a + c || c == a + b) {
        cout << "They are connected.";
	} else {
        cout << "They are not connected.";
	}

	return 0;
}

