#include <iostream> 
#include "dog.h"

using namespace std;


/*void some_func(dog dog_param){
    
}*/
int main(int argc, char const *argv[])
{
    dog myDog;

    dog* myOtherDog = new dog("Scooby", "chiguagua" ,2);

    cout << "I have two dogs" << endl;
    myDog.set_name("Scrappy");
    cout << "I've changed my mind, now the name of my dog is " << myDog.get_name() << endl;

    myOtherDog->print_info();

    //After chain call
    myOtherDog->set_name("Spiky")->set_breed("Sheepder")->set_age(14);

    myOtherDog->print_info();
    

    myDog.set_name("Mr dog")->set_breed("Pitbull")->set_age(3);
    myDog.print_info();
    delete myOtherDog;

    return 0;
}
