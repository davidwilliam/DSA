#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>

namespace dsa {

    struct Node {
        int data;
        Node* next;
        Node* prev; 

        Node(int value); 
    };

    class LinkedList {
    public:
        Node* head;

        LinkedList();    
        ~LinkedList();  

        void append(int value);

        void display() const;

        void reverse();

        bool hasCycle() const;

        void createCycle(int position);

        void listCycle() const;
    };

}

#endif
