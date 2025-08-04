#include<iostream>
using namespace std;

int main()
{
	int n_years;
    double price_washing_mashine, price_toy;

	cin >> n_years >> price_washing_mashine >> price_toy;

	int toys = 0;
	double money = 0;
	int years_she_got_money = 0;

	for (int y = 1; y <= n_years; y++) {
        if (y % 2 == 1) {
            toys++;
        } else {
            years_she_got_money++;
            money += (years_she_got_money * 10) - 1;
        }
	}

	int total_saved_money = money + (price_toy * toys);

	if (total_saved_money >= price_washing_mashine) {
        cout << "Yes! " << total_saved_money - price_washing_mashine;
	} else {
        cout << "No! " << price_washing_mashine - total_saved_money;
	}

	return 0;
}

