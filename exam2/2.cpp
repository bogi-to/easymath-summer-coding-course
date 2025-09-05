#include<iostream>
using namespace std;

int main()
{
	int pos1, pos2, pos3, pos4;
	cin >> pos1 >> pos2 >> pos3 >> pos4;

    if (pos1 + pos2 == pos3 + pos4 || pos1 - pos2 == pos3 - pos4) {
        cout << "yes";
        return 0;
    }

	cout << "no";

	return 0;
}
