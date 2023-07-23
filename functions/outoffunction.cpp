#include <iostream>

using namespace std;

void max_str(const string input1, const string input2, string& output){
    if(input1 > input2){
        output = input1;
    }else{  
        output = input2;
    }
}
int main(){
    string name = "Jose";
    string lastname = "Castro";
    string bigname;

    max_str(name, lastname, bigname);

    cout << "the bigger name is " << bigname << endl;
    return 0;
}