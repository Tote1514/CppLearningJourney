#include <iostream>
#include "linkedList.h"
#include "mySolution.h"

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
    int array[] = {4, 2, 1, 3};
    ListNode* head = createList(array, 4);
    
    Solution sol;
    ListNode* sortedList = sol.sortList(head);
    std::cout << *sortedList << std::endl;

    return 0;
}