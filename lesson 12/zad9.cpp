#include<iostream>
using namespace std;
int main(){
    int lastImpossible = -1;
    int consecutivePossible = 0;
    int x;
    for (int n = 1; ; n++) {
        bool canPay = false;
        for (int a = 0; a * 6 <= n; a++){ //===> 6.a + 7.b =n; n - 6.a trqbva da se deli na 7
            if ((n - a * 6) % 7 == 0) {
                canPay = true;
                break;
            }
        }
          if (canPay) {
            consecutivePossible++;
            }else {
            //cout << "No, continue" << endl;
            lastImpossible = n;
            consecutivePossible = 0;
        }
         if (consecutivePossible == 7) {
           // cout << "Yes" << endl;
            cout << lastImpossible << endl;
            break;

        }
    }

    while (cin >> x) {
        if (x == lastImpossible) {
            cout << "Yes";
            break;
        } else {
            cout << "No, continue" << endl;
        }
    }
return 0;
}
