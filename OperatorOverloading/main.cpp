#include <iostream>
#include "myString.h"

int main() {
    Mystring nome1("Jose");
    Mystring nome2;

    int testandonovocompilador{34};

    std::cout << testandonovocompilador << std::endl;

    // this is an assingment cause the objects has been already allocated

    nome2 = nome1;              // nome2.operator=(nome1)
    nome2 = "this is a test";   // nome2.operator=("this is a test")

                                // In the last case, It is created an auxiliar object to pass the char pointer to the operator

    nome1.display();
    nome2.display();

    Mystring s2;

    s2 = "Frank";    // s2.operator=("Frank")

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "------------------" << std::endl;

    // Other operators
    // Testing the other overloaded operators

    Mystring nome3("Jose");
    Mystring nome4;

    nome4 = -nome3; // nome4.operator=(-nome3)

    nome4.display();
    
    if(nome3 == nome4){
        std::cout << "They are equal" << std::endl;
    }

    // testing the + operator

    Mystring nome5("Jose");
    Mystring nome6(" Castro");

    Mystring nome7 = nome5 + nome6; // nome5.operator+(nome6)
    nome7.display();

    nome5 = nome5 + " Castro"; // nome5.operator+(nome6)

    nome6 = "Jose" + nome6; // with global function we can do this

    nome5.display();
    nome6.display();

    std::cout << std::endl << std::endl << std::endl;
    std::cout << "------------------" << std::endl;



    Mystring word("Hello");

    std::cout << "The word inside the functions is : " << word << std::endl;


    Mystring anotherword;

    std::cin >> anotherword;

    anotherword.display();
    return 0;
}
