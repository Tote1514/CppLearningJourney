#include <iostream>
#include <cctype>
#include <iomanip>

using namespace std;

int main(){
    
    cout << "alphanumeric character"<< endl;
    cout << "C is alphanumberic : " << isalpha('C') << endl;
    cout << "^ is alphanumberic : " << isalpha('^') << endl;

    cout << endl << endl;

    int cont_blank =0;
    int cont_upper = 0;
    int cont_lower = 0;
    char msg[] = {"I'm learning C++"};

    for (auto i :msg)
    {
        if (isupper(i))
        {
            cont_upper++;
        }
        else if (islower(i))
        {
            cont_lower++;
        }
        else if(isblank(i))
        {
            cont_blank++;
        }
        
    }
    cout << endl;
    cout << setw(40) << left << "The number of blank spaces is:" << setw(10) << left << cont_blank << endl;
    cout << setw(40) << left << "The number of upper char is:" << setw(10) << left << cont_upper << endl;
    cout << setw(40) << left << "The number of lower char is:" << setw(10) << left << cont_lower << endl;

    for (size_t i = 0; i < (sizeof(msg)/sizeof(msg[0])); i++)
    {
        if (isupper(msg[i]))
        {
            msg[i] = tolower(msg[i]);
        }
        else if(islower(msg[i]))
        {
            msg[i] = toupper(msg[i]);
        }
        
    }
    cout << endl << msg << endl;
    return 0;
}