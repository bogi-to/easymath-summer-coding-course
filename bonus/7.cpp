#include<iostream>
using namespace std;

int main()
{
    int groups, total_people = 0;
    double musala,monblan, kilimanjaro, k2, everest;

    cin >> groups;

	for (int i = 0; i < groups; i++) {

        int people_in_group;
        cin >> people_in_group;

        total_people += people_in_group;

        if (people_in_group <= 5) {
            musala += people_in_group;
        } else if (people_in_group > 5 && people_in_group <= 12) {
            monblan += people_in_group;
        }  else if (people_in_group > 12 && people_in_group <= 25) {
            kilimanjaro += people_in_group;
        }  else if (people_in_group > 25 && people_in_group <= 40) {
            k2 += people_in_group;
        }  else if (people_in_group > 40) {
            everest += people_in_group;
        }
	}

        cout << (musala / total_people) * 100 << "%" << endl;
        cout << (monblan / total_people) * 100 << "%" << endl;
        cout << (kilimanjaro / total_people) * 100 << "%" << endl;
        cout << (k2 / total_people) * 100 << "%" << endl;
        cout << (everest / total_people) * 100 << "%";

	return 0;
}

