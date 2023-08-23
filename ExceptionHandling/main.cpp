#include <iostream>
#include <string>

using namespace std;

class Printer
{
private:
    string name;
    int availablePaper;
public:
    Printer(string name, int available);
    ~Printer();
    void print(string txtDoc);
};

Printer::Printer(string name, int availablePaper)
    :name(name), availablePaper(availablePaper){}

Printer::~Printer()
{}

void Printer::print(string txtDoc) {

    int requiredPaper = txtDoc.length() / 10;

    if(requiredPaper > availablePaper){
        //throw "No paper";
        throw 101;
    }
    cout << "Printing..." << txtDoc << endl;

    availablePaper -= requiredPaper;
}

int main(){

    Printer p1("HP Deskjet 1045", 10);

    try
    {
        p1.print("My name is Jose. And I'm learning C++");
        p1.print("My name is Jose. And I'm learning C++");
        p1.print("My name is Jose. And I'm learning C++");
        p1.print("My name is Jose. And I'm learning C++");
    }
    catch(const char* txtException)
    {
        cerr << "Exception " << txtException << endl; 
    }
    catch(int exCode){
        cerr << "Exception " << exCode << endl;
    }
    catch(...){
        // this try catch will handle any type of exception
        cerr << "Exception handle" << endl;
    }
    

    return 0;
}