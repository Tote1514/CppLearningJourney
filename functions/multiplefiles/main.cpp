#include <iostream>
#include "operations.h"
#include "comparisons.h"

using namespace std;

int main(){

    int x = 7;
    int y = 8;
    int a = 5;
    int b = 6;

    int maior, menor, op;

    maior = max(x, y);
    menor = min(a, b);
    op = incr_mult(a, b);

    cout << "O numero maior eh : " << maior << endl;
    cout << "O numero menor eh : " << menor << endl;
    cout << "O resultado da operacao foi : " << op << endl;

    return 0;
}