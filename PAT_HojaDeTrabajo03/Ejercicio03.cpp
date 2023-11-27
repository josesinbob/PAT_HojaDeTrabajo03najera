#include "Ejercicio03.h"

Node<int>* Ejercicio03::copyList(Node<int>* head) {
    if (!head) {
        return nullptr;
    }

   
    Node<int>* current = head;
    while (current) {
        Node<int>* nextNode = current->next;
        current->next = new Node<int>{current->value, nextNode, nullptr};
        current = nextNode;
    }

 
    current = head;
    while (current) {
        if (current->random) {
            current->next->random = current->random->next;
        }
        current = current->next ? current->next->next : nullptr;
    }

   
    Node<int>* newHead = head->next;
    current = head;
    Node<int>* newCurrent = newHead;
    while (current) {
        current->next = current->next ? current->next->next : nullptr;
        newCurrent->next = newCurrent->next ? newCurrent->next->next : nullptr;
        current = current->next;
        newCurrent = newCurrent->next;
    }

    return newHead;
}
