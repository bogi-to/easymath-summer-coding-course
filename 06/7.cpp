#include<iostream>
using namespace std;

int main()
{
	int password;
	cin >> password;

	int digit1, digit2, digit3, digit4;
	digit1 = password % 10;
	digit2 = (password / 10) % 10;
	digit3 = (password / 100) % 10;
	digit4 = password / 1000;

	if (digit1 != digit2 && digit1 != digit3 && digit1 != digit4 &&
     digit2 != digit3 && digit2 != digit4 && digit3 != digit4) {
        if (digit1 > digit4) {
            if (digit1 + digit2 + digit3 + digit4 > 20) {
                cout << "Securre passwowrd";
            } else {
                cout << "Inseccure password.";
            }
        } else {
            cout << "Inseccure password.";
            return 0;
        }
     } else {
        cout << "Inseccure password.";
        return 0;
     }
	return 0;
}

