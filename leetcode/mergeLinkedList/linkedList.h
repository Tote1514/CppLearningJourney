#ifndef LINKEDLIST_H
#define LINKEDLIST_H


#include <iostream>

struct ListNode {
    friend std::ostream& operator<<(std::ostream &os, const ListNode &node) {
        os << node.val << "->";
        ListNode *temp = node.next;
        while (temp != nullptr) {
            os << temp->val << "->";
            temp = temp->next;
        }
        os << "NULL";
        return os;
    };
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

#endif // LINKEDLIST_H