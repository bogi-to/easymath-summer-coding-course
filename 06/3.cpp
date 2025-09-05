#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int ones, tens, hundreds;
	ones = num % 10;
	tens = (num / 10) % 10;
	hundreds = num / 100;

	if ((ones > tens && tens < hundreds) && (ones < tens && tens > hundreds)) {
        cout << "It's special.";
	} else {
        cout << "It's not special.";
	}


	return 0;
}

