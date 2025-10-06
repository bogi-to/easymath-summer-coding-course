#include <iostream>
using namespace std;
int main() {
  int a, b, c;
  cin >> a >> b >>c;

  if (a == c) {
     cout << a << b << c;
  }

   else {
     if (b == c) {
        if (b != a) {
            cout << a << b << c << a;
        }

        } else {
            cout << a << b << c << b << a;
        }
   }


    return 0;

}
