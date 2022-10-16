#include <iostream>
#include <string>
#include "src/blueprint.h"
using namespace std;
int main()
{
    cout << "/** Program Has Started **/" << endl << endl << endl;

    cout << "Hello, what is your name?" << endl;

    string userName;
    cin >> userName;
    Human user = Human(userName);
    user.printName();

    cout << "/** Program Has Ended **/" << endl << endl << endl;


    return 0;
}