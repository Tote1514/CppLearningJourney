#include <iostream>
#include <cstring>

using namespace std;

int main(){
    //std::strcat
    // you need to pay attetion to the size of the char array destination
    // It is not consider a safe funciton
    char dest[50] = {"Hello "};
    char src[50] = {"World!!"};

    strcat(dest, src);
    strcat(dest, " Goodbye World");

    cout << "the result of dest is " << dest << endl;

    char newdest[50] = {"another example: "};
    strncat(newdest, dest, 5);
    cout << newdest << endl;
    cout << endl;

    //char* dest1 = new char[30]{'F', 'i', 'r', 'e', 'l', 'o', 'r', 'd', '\0'};

    // std::strcpy : copying strings

    char* source = {"c++ is a multipuporse programming language"};

    char* dest1 = new char[strlen(source) + 1];

    cout<< "Copying bip bup..." << endl;
    strcpy(dest1, source);
    cout << "The content of the copy is : " << dest1 << endl;

    delete[]  dest1;
    dest1 = nullptr;
    //strncpy copying n characters from the source

    char source1[] = {"I love c++"};
    char* dest3 = new char[strlen(source1) + 1];
    cout << "Copying bip bup.." << endl;
    strcpy(dest3, source1);

    cout << "the message in the copy is : " << dest3 << endl;

    delete[] dest3;
    dest3 = nullptr;
    return 0;
}