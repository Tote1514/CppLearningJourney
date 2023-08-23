#include <iostream>
#include <exception>


using namespace std;

// class to handle the divide by zero error
class DivideByZeroError
{
    public:
        void getError()
        {
            cout << "Error: Divide by zero is not allowed" << endl;
        }
};

// class to handle the negative number error
class NegativeNumberError
{
    public:
        void getError()
        {
            cout << "Error: Negative number is not allowed" << endl;
        }
};

// Throwing an exception from within a constructor 

class account
{
    private:
        int balance;
    public:
        account(int balance): balance{balance}
        {
            if (balance < 0)
            {
                throw NegativeNumberError();
            }
        }
};

// Inheriting the exception class

class myException: public exception
{
    public:
        virtual const char* what() const throw()
        {
            return "Something bad happened!";
        }
};


// function to divide two numbers
double divide(int num1, int num2)
{
    if (num2 == 0)
    {
        throw DivideByZeroError();
    }
    else if (num1 < 0 || num2 < 0)
    {
        throw NegativeNumberError();
    }
    else
    {
        return static_cast<double>(num1) / num2;
    }
}

int main()
{

    int num1{1};
    int num2{0};

    try
    {
        cout << divide(num1, num2) << endl;
    }
    catch (DivideByZeroError &error)
    {
        error.getError();
    }
    catch (NegativeNumberError &error)
    {
        error.getError();
    }

    // Throwing an exception from within a constructor
    try
    {
        account a1{-1};
    }
    catch (NegativeNumberError &error)
    {
        error.getError();
    }

    // Inheriting the exception class

    try
    {
        throw myException();
    }
    catch (myException &error)
    {
        cout << error.what() << endl;
    }


    return 0;
}