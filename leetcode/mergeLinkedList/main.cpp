#include <iostream>
#include <string>
#include "linkedList.h"
#include "solution.h"

// Function to create a linked list of n nodes
ListNode* createList(int array[], int n) {
    ListNode* head = new ListNode(array[0]);
    ListNode* temp = head;
    for (int i = 2; i <= n; i++) {
        temp->next = new ListNode(array[i-1]);
        temp = temp->next;
    }
    std::cout << "List created with " << n << " nodes." << std::endl;
    return head;
}

int main(){


    int array[] = {1, 2, 8, 9, 11};
    int array2[] = {3, 4, 5, 7};
    ListNode* head = createList(array, 5);
    std::cout << *head << std::endl;

    ListNode* head2 = createList(array2, 4);
    std::cout << *head2 << std::endl;

    Solution solution;
    ListNode* merged = solution.mergeTwoLists(head, head2);
    std::cout << *merged << std::endl;
    return 0;
}