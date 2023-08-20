#include <iostream>

struct Node
{
    int data;
    Node* next;
};

struct List{
    Node* head;
};

int main(int argc, char const *argv[])
{
    List myfirstlist;
    Node* headlist = new Node;
    myfirstlist.head = headlist;

    myfirstlist.head->data = 4;
    myfirstlist.head->next = nullptr;

    delete myfirstlist.head;
    return 0;
}
