#include "linked_list.h"

namespace dsa {

    Node::Node(int value) : data(value), next(nullptr) {}

    LinkedList::LinkedList() : head(nullptr) {}

    LinkedList::~LinkedList() {
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
        Node* prev = nullptr;
        Node* curr = head;
        Node* next = nullptr;

        while (curr != nullptr) {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        head = prev;
    }

}
