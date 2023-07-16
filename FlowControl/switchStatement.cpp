#include <iostream>

using namespace std;

int main() {
    int numberuser;
    cout << "Please, enter a number between 1 and 5: " << endl;
    cin >> numberuser;

    switch (numberuser)
    {
    case 1:
        cout << "You digited 1" << endl;
        break;
    case 2:
        cout << "You digited 2" << endl;
        break;
    case 3:
        cout << "You digited 3" << endl;
        break;
    case 4:
        cout << "You digited 4" << endl;
        break;
    case 5:
        cout << "You digited 5" << endl;
        break;
    default:
        cout << "You digited another number" << endl;
        break;
    }
    int another;
    cout << "Please, enter another value: " << endl;
    cin >> another;

    switch (another)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "You entered an number between 1-5" << endl;
        break;
    
    default:
        cout << "You entered a number that is not between 1- 5" << endl;
        break;
    }
    return 0;
}