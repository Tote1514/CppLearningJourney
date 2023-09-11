#ifndef SOLUTION_H
#define SOLUTION_H

#include "linkedList.h"
#include <iostream>
#include <string>

class Solution {
public:

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
        ListNode * new_head = new ListNode;
        ListNode * temp = new_head;
        
        while (list1 != nullptr && list2 != nullptr)
        {
            if(list1->val < list2->val){

                temp->val = list1->val;
                list1 = list1->next;

            }else{
                temp->val = list2->val;
                list2 = list2->next;
            }
            std::cout << "temp->val: " << temp->val << std::endl;
            temp->next = new ListNode;
            temp = temp->next;
        }

        if(list1 != nullptr){
            temp->val = list1->val;
            temp->next = list1->next;
        }else{
            temp->val = list2->val;
            temp->next = list2->next;
        }
        return new_head;
    };


    /*ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head = new ListNode();
        ListNode* temp = head;
        while (list1 != nullptr && list2 != nullptr) {
            if (list1->val < list2->val) {
                temp->next = new ListNode(list1->val);
                list1 = list1->next;
            } else {
                temp->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            temp = temp->next;
        }
        if (list1 != nullptr) {
            temp->next = list1;
        } else {
            temp->next = list2;
        }
        return head->next;
    }*/
};


#endif // SOLUTION_H