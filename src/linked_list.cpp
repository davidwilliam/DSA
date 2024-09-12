#include "linked_list.h"

namespace dsa {

    Node::Node(int value) : data(value), next(nullptr), prev(nullptr) {}

    LinkedList::LinkedList() : head(nullptr) {}

    LinkedList::~LinkedList() {
        if (hasCycle()) {
            std::cout << "Cycle detected, breaking the cycle before destruction..." << std::endl;
            Node* slow = head;
            Node* fast = head;

            while (fast != nullptr && fast->next != nullptr) {
                slow = slow->next;
                fast = fast->next->next;
                if (slow == fast) {
                    break;
                }
            }

            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }

            Node* temp = slow;
            while (temp->next != slow) {
                temp = temp->next;
            }
            temp->next = nullptr;
        }

        Node* current = head;
        Node* next = nullptr;
        while (current != nullptr) {
            next = current->next;
            delete current;
            current = next;
        }
        head = nullptr;
    }

    void LinkedList::append(int value) {
        Node* newNode = new Node(value);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void LinkedList::display() const {
        Node* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }

    void LinkedList::reverse() {
        Node* current = head;
        Node* prev = nullptr;

        while (current != nullptr) {
            prev = current->prev;
            current->prev = current->next;
            current->next = prev;
            current = current->prev;
        }

        if (prev != nullptr) {
            head = prev->prev;
        }
    }

    bool LinkedList::hasCycle() const {
        Node* slow = head;
        Node* fast = head;

        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }

        return false;
    }

    void LinkedList::createCycle(int position) {
        if (!head) return;

        Node* cycleNode = head;
        Node* tail = head;

        int count = 0;
        while (tail->next != nullptr) {
            if (count == position) {
                cycleNode = tail;
            }
            tail = tail->next;
            count++;
        }

        tail->next = cycleNode;
    }

    void LinkedList::listCycle() const {
    if (!hasCycle()) {
        std::cout << "No cycle found in the linked list." << std::endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;
        }
    }

    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    Node* cycleStart = slow;
    std::cout << "Cycle detected. The cycle includes the following nodes: ";

    Node* temp = cycleStart;
    do {
        std::cout << temp->data << " ";
        temp = temp->next;
    } while (temp != cycleStart);

    std::cout << std::endl;
}


}