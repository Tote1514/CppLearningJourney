#include <iostream>
#include <memory>
#include <vector>

using namespace std;

class Entity {
private:
    int x;
public:
    Entity(int x)
    :x(x) {
        cout << "Created Entity!" << endl;
    }

    ~Entity() {
        cout << "Destroyed Entity!" << endl;
    }

    void Print() {
        cout << "x: " << x << endl;
    }
};

int main(int argc, char const *argv[])
{
    // TODO: Implement smart pointers
    // unique_ptr
    cout << "Unique pointers " << endl;
    {
        unique_ptr<int> p1(new int{10});

        // unique_ptr<int> p2 = p1; // Error: can't copy unique_ptr

        unique_ptr<int> p2 = move(p1); // OK: can move unique_ptr
                                       // now, p1 is nullptr
        cout << *p2 << endl; // 10
        *p2 = 100;
        cout << *p2 << endl; // 100
        // some useful methods
        cout << p2.get() << endl; // get the address of the pointer
        p2.reset(); // p2 now is nullptr
        if (p2) {
            cout << *p2 << endl; // Don't dereference p2 here
        } else {
            cout << "p2 is not valid" << endl; // Print a message instead
        }

        unique_ptr<Entity> entity(new Entity{12});

        entity->Print();

        // unique pointers and vectors
        vector<unique_ptr<int>> vec;

        unique_ptr<int> ptr(new int{10});


        // vec.push_back(ptr); // Error: can't copy unique_ptr

        vec.push_back(move(ptr));

        cout << *vec[0] << endl;

        // unique_ptr - make_unique (C++14)

        unique_ptr<int> ptr2 = make_unique<int>(10);

        cout << *ptr2 << endl;

        unique_ptr<Entity> entity2 = make_unique<Entity>(12);

        entity2->Print();

        auto entity3 = make_unique<Entity>(144);

        entity3->Print();

    }// automatically deletes the pointer

    // weak_ptr

    {
        shared_ptr<int> sharedPtr = make_shared<int>(10);

        weak_ptr<int> weakPtr = sharedPtr;

        cout << weakPtr.use_count() << endl; // 1


        // q: What is the use of the lock() method?
        // a: The lock() method returns a shared_ptr that shares ownership of the managed object if it is not expired,
        //    otherwise it returns an empty shared_ptr.
        if (auto sharedPtr1 = weakPtr.lock()) {
            cout << *sharedPtr1 << endl; // 10
        } else {
            cout << "The pointer is not valid" << endl;
        }
    }

    // shared_ptr
    cout << "Shared pointers " << endl;
    {
       shared_ptr<int> ptr1(new int{65});

        cout << *ptr1 << endl; // 65

        *ptr1 = 100;

        cout << *ptr1 << endl; // 100
        // some useful methods
        cout << ptr1.get() << endl; // get the address of the pointer
        cout << ptr1.use_count() << endl; // get the number of shared pointers 
                                            // that point to the same object
                                            // the output is 1

        shared_ptr<int> p2 = ptr1; // OK: can copy shared_ptr
        std::cout << ptr1.use_count() << std::endl; // 2

        ptr1.reset(); // ptr1 now is nullptr

        cout << ptr1.use_count() << endl; // 0
        cout << p2.use_count() << endl; // 1

        shared_ptr<Entity> entity(new Entity{55});

        std::vector<std::shared_ptr<int>> vec;

        std::shared_ptr<int> object1(new int{25});

        vec.push_back(object1);         // This is possible cause it is possible to copy a shared pointer

        std::cout << "The number of pointers that are pointing to object 1 (25)" << object1.use_count() << std::endl;
        
        

    }// automatically deletes the pointer

    return 0;
}
