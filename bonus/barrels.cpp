#include<iostream>
using namespace std;

int main()
{
    char a, b;
    int barrels_a, barrels_b, barrels_wants;
    cin >> barrels_a >> a >> barrels_b >> b >> barrels_wants;

    if (a == 'A' && barrels_wants > barrels_a) {
        cout << barrels_a;
    }

    if (a == 'A' && barrels_wants <= barrels_a) {
        cout << barrels_wants;
    }

    if (a == 'B' && barrels_wants > barrels_a) {
        cout << barrels_wants - barrels_a;
    }

    if (a == 'B' && barrels_wants <= barrels_a) {
        cout << 0;
    }



	return 0;
}
