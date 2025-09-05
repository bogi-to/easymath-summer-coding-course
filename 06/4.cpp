#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int ones, tens;
	ones = num % 10;
	tens = num / 10;

	if (num < 100 && num > 9 && num % 4 == 0 && (ones + tens) % 2 == 0) {
        cout << "Special.";
	} else {
        cout << "Not special";
	}

	return 0;
}

