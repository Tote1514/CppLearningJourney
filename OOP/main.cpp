#include <iostream> 
#include <iomanip>

using namespace std;

class AbstractEmployee{
    virtual void AskForPromotion() = 0;
};

class Employee:AbstractEmployee{
private:
    string Name;
    int Age;
    string Company;
public:

    // Constructor
    Employee(string name, int age, string company){
       Name = name;
       Age = age;
       Company = company;
    }
    //Setters
    void setName(string name){
        Name = name;
    }
    void setAge(int age){
        if (age >= 18)
        {
            Age = age;
        }
        
    }
    void setCompany(string company){
        Company = company;
    }
    //Getters
    string getName(){
        return Name;
    }
    int getAge(int age){
        return Age;
    }
    string getCompany(){
        return Company; 
    }
    // My First method
    void Introduce_yourself(){
        for (size_t i = 0; i < 120; i++)
        {
           cout << "*";
        }
        cout << endl;
        cout << setw(50) << "My name is " << Name << endl;
        cout << setw(50) << "I am " << Age << endl;
        cout << setw(50) << "I work in " << Company << endl;   
        for (size_t i = 0; i < 120; i++)
        {
           cout << "*";
        }
        cout << endl;
    }
    void AskForPromotion(){
        if (Age > 22)
        {
            cout << Name << " will be promoted" << endl;
        }
        else
        {
            cout << Name << " will not be promoted" << endl;
        }
        
    }
    /// @brief 
    virtual void work(){
        cout << getName() << " is doing something and i am tired to think what is he/she doing" << endl;
    }
};

class Developer:public Employee{
public:
    string FavoriteProgrammingLanguage;
    Developer(string name, int age, string company, string favoriteProgrammingLanguage)
        :Employee(name, age, company){
            FavoriteProgrammingLanguage = favoriteProgrammingLanguage;
    }
    void Fixbug(){
        cout << getName() << " fixed the bug" << endl;
    }
    void work(){
        cout << getName() << " is writing code" << endl;
    }
};

class Teacher:public Employee{
public:
    string Subject;
    Teacher(string name, int age, string company, string subject)
        :Employee(name, age, company){
            Subject = subject;
    }
    void PrepareLesson(){
        cout << getName() << " is preparing a lesson" << endl;
    }
    void work(){
        cout << getName() << " is teaching right now" << endl;
    }
};
int main(){


    Employee employee1("Jose", 21, "Dataprev");
    Employee employee2("Ana", 23, "Home");
    
    
    employee1.Introduce_yourself();
    employee2.Introduce_yourself();

    employee1.setName("Carlos");
    cout << "The name of the first employee is " << employee1.getName() << endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();
    // inheritance

    Developer d("Jose", 21, "DeepSeed", "Python");
    d.Introduce_yourself();
    d.Fixbug();
    d.work();

    cout<<endl;

    Teacher t("Santana", 33, "UERJ", "Science computer");
    t.PrepareLesson();
    t.work();

    // the most common use of polymorphism is when a parent class 
    // reference is used to refer a child class object

    Employee* e1 = &d;
    Employee* e2 = &t;

    e1->work();
    e2->work();

    return 0;
}