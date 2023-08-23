#include <iostream>
#include <exception>

using namespace std;

// IlegalBalanceException class

class IlegalBalanceExcepction:public exception{
    public:
        virtual const char* what() const noexcept override{
            return "Illegal Balance Exception";

        }
};

// InsufficientFundsException class
class InsufficientFundsException:public exception{
    public:
        virtual const char* what() const noexcept override{
            return "Insufficient Funds Exception";
        }
};


// account class
class account{
    private:
        int balance;
    public:
        account(int balance): balance{balance}{
            if(balance<0){
                throw IlegalBalanceExcepction();
            }
        }
        int withdraw(int amount){
            if(balance-amount>=0){
                balance-=amount;
                return balance;
            }else{
                throw InsufficientFundsException();
            }
        }
};

int main(){

    try{
        account a1{-1};
    }catch(IlegalBalanceExcepction &error){
        cout<< "The error was " << error.what() << endl;
    }

    try{
        account a2{100};
        try{
            a2.withdraw(200);
            cout << "Withdrawal successful" << endl;
        }catch(InsufficientFundsException &error){
            cout<< "The error was " << error.what() << endl;
        }
    }catch(IlegalBalanceExcepction &error){
        cout<< "The error was " << error.what() << endl;
    }
    cout << "Program ended successfully" << endl; // This line will be printed because the program ended successfully
    return 0;
}