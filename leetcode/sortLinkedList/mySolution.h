#ifndef MYSOLUTION_H
#define MYSOLUTION_H

#include <iostream>
#include <vector>
#include <stack>
#include "linkedList.h"

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        ListNode * temp = head;
        if(temp == nullptr || temp->next == nullptr) return temp;
        std::vector<int> aux;

        while (temp != nullptr)
        {
            aux.push_back(temp->val);
            temp = temp->next;
        }

        mergeSort(aux, 0, aux.size() - 1); 
                 

        ListNode * sortedList = new ListNode(aux[0]);
        ListNode * temp2 = sortedList;
        for (size_t i = 1; i < aux.size(); i++)
        {
            temp2->next = new ListNode(aux[i]);
            temp2 = temp2->next;
        }
        return sortedList;    
    
    }

private:
    void merge(std::vector<int>& A, int inicio, int meio, int fim){

        // Dividing the inicial vector in two stacks

        std::stack<int> aux1;
        for (int i = meio; i >= inicio; i--)
        {
            aux1.push(A[i]);
        }

        std::stack<int> aux2;
        for (int i = fim; i > meio; i--)
        {
            aux2.push(A[i]);
        }

        

        for (size_t i = inicio; i <= fim; i++)
        {
            if (aux2.empty() || (!aux1.empty() && aux1.top() < aux2.top()))
            {
                A[i] = aux1.top();
                aux1.pop();
            }
            else
            {
                A[i] = aux2.top();
                aux2.pop();
            }
            
        }
        
    }

    void mergeSort(std::vector<int>& A, int inicio, int fim){

        if(inicio < fim){
            int metade = (inicio + fim) / 2;
            mergeSort(A, inicio, metade);
            mergeSort(A, metade + 1, fim);
            merge(A, inicio, metade, fim);
        }
    }
};


#endif  // MYSOLUTION_H