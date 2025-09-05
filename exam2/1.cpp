#include<iostream>
using namespace std;
int main()
{
	int weight, distance, price;
	cin >> weight >> distance;

	if (distance <= 10) {
        if (weight < 2) {
            price = 5;
        } else if (weight >= 2 && weight < 10) {
            price = 10;
        } else if (10 <= weight) {
            price = weight + 5;
        }
	}

	if (distance > 10 && distance <= 50) {
        if (weight < 2) {
            price = 10;
        } else if (weight >= 2 && weight < 10) {
            price = 15;
        } else if (10 <= weight) {
            price = weight + 10;
        }
	}

	if (distance > 50) {
        if (weight < 2) {
            price = 15;
        } else if (weight >= 2 && weight < 10) {
            price = 20;
        } else if (10 <= weight) {
            price = weight + 15;
        }
	}

	cout << price;

	return 0;
}

