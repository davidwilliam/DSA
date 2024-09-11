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

    // Creating a cycle
    std::cout << "\nCreating a cycle by connecting the last node to the second node..." << std::endl;
    list.reverse(); // Reversing it back to original order to create cycle as per original sequence
    list.createCycle(1); // Connect last node to the second node (1-based index)

    // Detecting a cycle
    std::cout << "\nChecking if the linked list contains a cycle..." << std::endl;
    if (list.hasCycle()) {
        std::cout << "Cycle detected in the linked list!" << std::endl;
    } else {
        std::cout << "No cycle detected in the linked list." << std::endl;
    }

    return 0;
}
