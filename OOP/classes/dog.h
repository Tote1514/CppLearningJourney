
using namespace std;

class dog
{
private:
    string name;
    string breed;
    int* age;
public:
    dog();
    dog(string name_param, string breed_param, int age_param);
    ~dog();
    dog* set_name(string name);
    dog* set_breed(string breed);
    dog* set_age(int age);
    string get_name();
    void print_info();
};


