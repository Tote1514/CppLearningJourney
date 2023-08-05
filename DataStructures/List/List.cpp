#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T1>
class List
{
    friend std::ostream& operator<<(std::ostream& out, const List& list){
        out << "[";
        for (size_t i = 0; i < list.end + 1; i++)
        {
            out << list.array[i] << ((i!=list.end)? ", ": "");

        }
        out << "]";
        return out;
    }
private:
    size_t max_size;
    int end;
    T1* array;
public:
    List(){
        max_size = 10;
        end = -1;
        array = new T1[max_size];
    }
    ~List(){
        delete[] array;
    }
    void remove(size_t index){
        if(index < 0 || index > end){
            cout << "The index doesn't belong to the array" << endl;
            return;
        }
        for (size_t i = index; i < end; i++)
        {
            array[i] = array[i+1];
        }
        end--;
        
    }
    void insert(T1 value){
        if(this->count() == max_size){
            T1* aux = new T1[max_size];
            for (size_t i = 0; i <= end; i++)
            {
                aux[i] = array[i];
            }
            
            delete [] array;
             
            max_size *= 2;
            array = new T1[max_size];
            end++;

            for (size_t i = 0; i < end; i++)
            {
                array[i] = aux[i];
            }
            array[end] = value;
            delete[] aux;

        }else{
            array[end+1] = value;
            end++;
        }
    
    }
    void insert_into(T1 value, size_t index){
        if (index < 0 || index > end)
        {
            cout << "The index doesn't belong to the array" << endl;
            return;
        }

        end++;
        if(this->count() > max_size){
            max_size *= 2;
            T1* aux = new T1[max_size];
            for (size_t i = 0; i < index; i++)
            {
                aux[i] = array[i];
            }
            aux[index] = value;
            for (size_t i = index + 1; i <= end; i++)
            {
                aux[i] = array[i-1];
            }
            delete[] array;
            array = new T1[max_size];
            for (size_t i = 0; i <= end; i++)
            {
                array[i] = aux[i];
            }
            delete[] aux;
            

        }else{
            for (size_t i = end; i > index; i--)
            {
                array[i] = array[i-1];
            }
            array[index] = value;
        }
      
    }
    T1 read(size_t index){
        if(index < 0 || index > end){
            cout << "The index doesn't belong to the array" << endl;
            return -1;
        }
        return array[index];
    }
    void modify(T1 newvalue, size_t index){
        if(index < 0 || index > end){
            cout << "The index doesn't belong to the array" << endl;
            return;
        }
        array[index] = newvalue;
    }
    size_t count(){
        return end + 1;
    }
    void print_list(){
        cout << "[";
        for (size_t i = 0; i < end + 1; i++)
        {
            cout << array[i] << ((i!=end)? ", ": "");

        }
        cout << "]" << endl;;
    }
};


int main(){

    // List lesson 
    // simple array
    int array[5] = {1, 2, 3, 4, 5};
    array[0] = 3;
    cout << array[0] << endl;
    cout << "****************************************************" << endl;
    // Dynamic list
    List<int> firstlist;
    //cout << firstlist.count() << endl;
    firstlist.insert(1);
    firstlist.insert(2);
    firstlist.insert(3);
    firstlist.insert(4);
    firstlist.insert(5);
    firstlist.insert(6);
    firstlist.insert(7);
    firstlist.insert(8);
    firstlist.insert(9);
    firstlist.insert(10);
    firstlist.insert(11);
    firstlist.insert(12);
    firstlist.insert(13);
    firstlist.insert(14);
    firstlist.insert(15);
    firstlist.insert(16);
    firstlist.insert(17);
    firstlist.insert(18);
    firstlist.insert(19);
    firstlist.insert(20);
    firstlist.insert_into(45, 3);
    cout << firstlist.count() << endl;;
    firstlist.print_list();
    cout << "the first list " << firstlist << endl;
    cout << firstlist.read(5) << endl;
    firstlist.modify(3, 3);
    firstlist.print_list();
    cout << "Still the first list " << firstlist << endl;

    return 0;
}