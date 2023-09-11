#ifndef SOLUTION_H
#define SOLUTION_H

#include "linkedList.h"
#include <iostream>

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return head;
        ListNode *slow = head, *fast = head->next;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *mid = slow->next;
        slow->next = nullptr;
        ListNode *left = sortList(head);
        ListNode *right = sortList(mid);
        return merge(left, right);    
    }
private:
    ListNode* merge(ListNode *left, ListNode *right) {
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;
        while (left != nullptr && right != nullptr) {
            if (left->val < right->val) {
                temp->next = left;
                left = left->next;
            } else {
                temp->next = right;
                right = right->next;
            }
            temp = temp->next;
        }
        if (left != nullptr) temp->next = left;
        if (right != nullptr) temp->next = right;
        return dummy->next;
    }
};

#endif // SOLUTION_H