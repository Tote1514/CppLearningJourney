#include <iostream>

using namespace std;


// Function declaration
//it is called header
int minimo(int x, int y);

void say_age(int* age);

void tim_burton(int &age);

// A function that doesn't return anything
void enter_bar(int age){
    if(age > 18){
        cout << "You can enter! " << endl;
    }else{
        cout << "You can't enter because you are too young!!" << endl;
    }
}
// A function that returns something

int maior(int x, int y){
    return (x< y) ? y : x;
}

int main(){
    int age; 
    cout << "Please, enter your age : " << endl;
    cin >> age;

    enter_bar(age);

    int x, y;
    cout << "Please, enter two numbers: " << endl;
    cin >> x >> y;

    int ma = maior(x, y);

    cout<< "the greater number between the two values is : " << ma << endl;
    

    int a, b;
    
    cout << "Enter, two more numbers: " << endl;
    cin >> a >> b;

    cout << "The lower value between the two numbers is : " << minimo(a, b) << endl;

    int age1;
    cout << "Please, enter your age: " << endl;
    cin >> age1;

    cout << "Age before: " << age1 << endl;
    say_age(&age1);
    cout << "Age after: " << age1 << endl;

    tim_burton(age1);
    cout << "Age after for tim burton: " << age1 << endl;
    return 0;
}

int minimo(int x, int y){
    return (x> y) ? y : x;
}


//the parameter is a pointer
void say_age(int* age){
    (*age)++;
    cout << "Happy birthday. Now you are " << *age << endl;
}

// the parameter is a reference
void tim_burton(int& age){
    age--;
    cout << "You are " << age << " now." << endl;
}