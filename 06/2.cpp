#include<iostream>
using namespace std;

int main()
{
	int num;
	cin >> num;

	int ones, tens, hundreds, thousands;
	ones = num % 10;
	tens = (num / 10) % 10;
	hundreds = (num / 100) % 10;
	thousands = num / 1000;

	int max_, min_;
	max_ = ones;
	min_ = ones;

	if (tens > max_) max_ = tens;
	if (tens < min_) min_ = tens;
	if (hundreds > max_)max_ = hundreds;
	if (hundreds < min_)min_ = hundreds;
	if (thousands > max_) max_ = thousands;
	if (thousands < min_) min_ = thousands;

	if (ones + tens == hundreds + thousands && max_ - min_ == 5) {
        cout << "It's magical.";
	} else {
        cout << "It's not magical.";
	}

	return 0;
}

