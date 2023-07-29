#include <iostream>
#include "parent.h"
#include "child.h"

int main(int argc, char const *argv[])
{
    Parent father;
    father.print();
    Child son;
    son.print();
    son.Parent::print();
    return 0;
}
