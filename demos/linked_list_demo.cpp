#include <iostream>
#include "linked_list.h"

using namespace dsa;

int main() {
    LinkedList list;

    std::cout << "== Linked List Demo ==" << std::endl;

    std::cout << "\nAppending elements to the list: 1, 2, 3, 4, 5" << std::endl;
    list.append(1);
    list.append(2);
    list.append(3);
    list.append(4);
    list.append(5);

    std::cout << "Linked list after appending elements: ";
    list.display();

    std::cout << "\nReversing the linked list..." << std::endl;
    list.reverse();

    std::cout << "Linked list after reversing: ";
    list.display();

    return 0;
}
