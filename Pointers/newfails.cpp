#include <iostream>

using namespace std;

int main(){
    
    /*for (size_t i = 0; i < 1000000; i++)
    {
        try
        {
            int* pt = new int[100000000];
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }*/
    int* pt2 = new(nothrow) int [10000000000000000];
    if ( pt2 == nullptr)
    {
        cout << "the allocation failed" << endl;
    }
    else
    {
        cout << "the allocaiton succeded" << endl;
        delete pt2;
        pt2 = nullptr;
    }
    
    
    return 0;
}