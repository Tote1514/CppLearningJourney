#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int scores[3];
    // My compiler doesn't have size
    int size = sizeof(scores)/sizeof(scores[0]);
    for (size_t i = 0; i < size; i++)
    {
        cout << "Please enter the " << (i + 1) << "º of the array" << endl;
        cin >> scores[i];
    }
    for (size_t i = 0; i < size; i++)
    {
        cout << setw(50);
        cout << "The " << (i+1) << "º is" << scores[i] << endl;
    }
    // Another way of iterate an array
    cout << endl;
    cout << endl;
    // this is a range base loop
    for (auto k : scores)
    {
        cout << setw(0);
        cout << "The element is " << k << endl;
    }
    // another array but this time initiliazed already
    double array[] = {2, 3, 4, 5, 3};

    for (auto l : array)
    {
        cout << "The element of the other array is " << l << endl;
    }
    cout << endl;
    //cout << "The size of the first array is " << size(scores) << endl;
    //cout << "The size of the second array is " << size(array) << endl; 

    //**************************Array of characters*********************
    char message[6] = {'h', 'e', 'l', 'l', 'o', '\0'}; // \0 is an special character that indicates the end of a string
    cout << "the message is " << message << endl;

    char anothermessage[] = {"Hello World"}; // string literal (it needs "")
    cout <<endl;
    cout << "The other message is " << anothermessage << endl;

    return 0;
}