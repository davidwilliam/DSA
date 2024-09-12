#include <iostream>
#include "linked_list.h"

using namespace dsa;

int main() {
    LinkedList list;
    LinkedList listWithCycle;

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

    std::cout << "\nCreating a cycle by connecting the last node to the second node..." << std::endl;
    list.reverse();
    list.createCycle(1);

    std::cout << "\nChecking if the linked list contains a cycle..." << std::endl;
    if (list.hasCycle()) {
        std::cout << "Cycle detected in the linked list!" << std::endl;
    } else {
        std::cout << "No cycle detected in the linked list." << std::endl;
    }

    std::cout << "== Linked List Cycle Demo ==" << std::endl;

    std::cout << "\nAppending elements to the list: 1, 2, 3, 4, 5" << std::endl;
    listWithCycle.append(1);
    listWithCycle.append(2);
    listWithCycle.append(3);
    listWithCycle.append(4);
    listWithCycle.append(5);

    std::cout << "Linked list after appending elements: ";
    listWithCycle.display();

    std::cout << "\nReversing the linked list..." << std::endl;
    listWithCycle.reverse();

    std::cout << "Linked list after reversing: ";
    listWithCycle.display();

    std::cout << "\nCreating a cycle by connecting the last node to the second node..." << std::endl;
    listWithCycle.createCycle(1);

    std::cout << "Checking if the linked list contains a cycle..." << std::endl;
    if (listWithCycle.hasCycle()) {
        std::cout << "Cycle detected in the linked list!" << std::endl;

        listWithCycle.listCycle();
    } else {
        std::cout << "No cycle detected in the linked list." << std::endl;
    }

    return 0;
}
