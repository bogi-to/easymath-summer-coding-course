#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    char a, b;
    int barrels_a, barrels_b, barrels_wants;
    cin >> barrels_a >> a >> barrels_b >> b >> barrels_wants;
    if (a == 'A') cout << min (barrels_a, barrels_wants);
    if (a == 'B') cout << max (barrels_wants - barrels_a, 0);
	return 0;
}
