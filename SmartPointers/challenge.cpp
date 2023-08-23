#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Test {
private:
    int data;
public:
    Test():data{0} {
        cout << "Test constructor (" << data << ")" << endl;
    }
    Test(int data):data{data} {
        cout << "Test constructor (" << data << ")" << endl;
    }
    int get_data() const {
        return data;
    }
    // Destructor
    ~Test() {
        cout << "Test destructor (" << data << ")" << endl;
    }
};

// function prototypes

unique_ptr<vector<shared_ptr<Test>>> make();
void fill(vector<shared_ptr<Test>> &vec, int num);
void display(const vector<shared_ptr<Test>> &vec);

int main(int argc, char const *argv[])
{

    unique_ptr<vector<shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();

    cout << vec_ptr.get() << endl;
    cout << "How many data points do you want to enter: ";
    int num;
    cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);

    return 0;
}

unique_ptr<vector<shared_ptr<Test>>> make() {
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>> &vec, int num) {
    int data;
    for (int i = 0; i < num; ++i) {
        cout << "Enter data point [" << i + 1 << "]: ";
        cin >> data;
        vec.push_back(make_shared<Test>(data));
    }
}
void display(const vector<shared_ptr<Test>> &vec) {
    cout << "\nDisplaying vector data" << endl;
    cout << "=======================" << endl;
    for (const auto &ptr: vec) {
        cout << ptr->get_data() << endl;
    }
    cout << "=======================" << endl;
}