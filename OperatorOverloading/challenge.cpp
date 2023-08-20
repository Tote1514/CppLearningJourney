#include <iostream>
#include "myString.h"


// Unitary test for the overloaded operators

bool testforplusoperator(const Mystring& lhs, const Mystring& rhs);


int main(){


    Mystring name{"Jose"};
    Mystring namethreetimes;

    // Testing the * operator
    namethreetimes = name * 4;

    std::cout << namethreetimes << std::endl;
    namethreetimes.display();

    // Testing the += operator

    Mystring name2{" Castro"};
    Mystring name3{"Jose"};
    name3 += name2;

    std::cout << name3 << std::endl;

    // Testing the *= operator
    Mystring name5{"123"};

    name5 *= 3;

    std::cout << name5 << std::endl;

    // testing the ++ operator postfix
    Mystring name6{"Test"};
    std::cout << name6++ << std::endl;

    std::cout << name6 << std::endl;

    // Testing the ++ operator prefix

    Mystring name7{"Test2"};

    std::cout << ++name7 << std::endl;

    // Testing the testforplusoperator function
    if(testforplusoperator(name, name2)){
        std::cout << "The testforplusoperator function works" << std::endl;
    }else{
        std::cout << "The testforplusoperator function does not work" << std::endl;
    }

    return 0;
}

bool testforplusoperator(const Mystring& lhs, const Mystring& rhs){

    Mystring result = lhs + rhs;   

    if(result == "Jose Castro"){
        return true;
    }else{
        return false;
    }
}