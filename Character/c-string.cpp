#include <iostream>
#include <cstring>


using namespace std;

int main(){

    char msg[] = {"Hello World"};
    char msg2[] = {"Another messsage"}; 
    char msg3[] = {"Hello, jose"};
    char* msgp = {"qwe"};
    size_t n = 5;


    //std::strlen
    // returns the size of a string 
    cout << "the size of the message is : " << strlen(msg) << endl;
    cout << "The size of the message in the pointer : " << strlen(msgp) << endl;
    
    // std::strncmp
    // compare two char arrays
    cout << "Are this two messages the same ? " << strcmp(msg, msg2) << endl;
    // compare the first n elements of two char arrays
    cout << "what about this two messages ? " << strncmp(msg, msg3, n )<< endl;

    // strd::strchr
    // find the first occurrence of a character
    int count = 0;
    char* mantra = {"Try not. Do or not do it. There is no try"};
    char* result = mantra;
    char target = 'T';

    while(strchr(result, target) != nullptr){
        cout << "The target " << target << " was find : " << strchr(result, target)<< endl;
        result++;
        count++;
    }
    cout << "the number of times that the iteration occurr were " << count << endl;
    
    char* result1 = mantra;
    // std::strrchr = the same thing as strchr but this time it finds the last occurrence
    while(strrchr(result1, target) != nullptr){
        cout << "The target " << target << " was find : " << strrchr(result1, target)<< endl;
        result1++;
    }
  
    
    
    return 0;
}