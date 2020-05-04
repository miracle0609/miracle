#include <iostream>
using namespace std;

int main()
{
    int year;
    cin >> year;
    year = (year - 1900) % 12;
    if(year < 0) year += 12;
    switch(year)
    {
        case 0:cout << "rat" << endl;break;
        case 1:cout << "ox"<< endl;break;
        case 2:cout << "tiger"<< endl;break;
        case 3:cout << "rabbit"<< endl;break;
        case 4:cout << "dragon"<< endl;break;
        case 5:cout << "snake"<< endl;break;
        case 6:cout << "horse"<< endl;break;
        case 7:cout << "sheep"<< endl;break;
        case 8:cout << "monkey"<< endl;break;
        case 9:cout << "rooster"<< endl;break;
        case 10:cout << "dog"<< endl;break;
        case 11:cout << "pig"<< endl;break;
    }
    return 0;
}
