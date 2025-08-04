#include<iostream>
using namespace std;
int main ()
{
    int questions_right, grade_on_test = 0;
    cin >> questions_right;

    if (questions_right >= 18 && questions_right <= 20) {
        grade_on_test = 6;
    } else if (questions_right >= 15 && questions_right <= 17) {
        grade_on_test = 5;
    } else if (questions_right >= 12 && questions_right <= 14) {
        grade_on_test = 4;
    } else if (questions_right >= 9 && questions_right <= 11) {
        grade_on_test = 3;
    } else if (questions_right < 9 && questions_right >= 0) {
        grade_on_test = 2;
    } else {
        cout << "Invalid grade on test.";
        return 0;
    }

    cout << grade_on_test;

    return 0;
}
