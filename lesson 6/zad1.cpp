#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;

    int pos_low = 0;
    int temp = n;
    int pos_high = 0;

    while ((temp&1) == 0) {
        temp>>= 1;

        pos_low++;
    }

    temp = n;

    while (temp > 1) {
        temp>>= 1;

        pos_high++;
    }

    cout << (pos_high - pos_low);

	return 0;
}
