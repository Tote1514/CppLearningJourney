#include "player.h"
#include "person.h"
#include <iostream> 

using namespace std;


int main(int argc, char const *argv[])
{
    Person p("Paulo", "Alberto");
    Player pl("Call of duty", "Carlos", "Terceiro");

    cout << p << endl;
    cout << pl << endl;

    return 0;
}
