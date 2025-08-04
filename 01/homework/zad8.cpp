#include<iostream>
using namespace std;
main ()
{
    int mon;
    int tue;
    int wed;
    int thu;
    int fri;
    int sat;
    int sun;
    cin >> mon >> tue >> wed >> thu >> fri >> sat >> sun;
    cout << "delnichni dni: " << mon+tue+wed+thu+fri<< endl;
    cout << "yiikend: " << sat+sun << endl;
    cout << "tialata sedmica: " << mon+tue+wed+thu+fri+sat+sun;
    return 0;
}
