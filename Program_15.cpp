#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtEnd(Node*& head, int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        return;
    }

    Node* p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = temp;
}

void deleteByValue(Node*& head, int value) {
    if (head == NULL) {
        cout << "List is empty\n";
        return;
    }
    if (head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }\
    Node* p = head;
    Node* prev = NULL;

    while (p != NULL && p->data != value) {
        prev = p;
        p = p->next;
    }
    if (p == NULL) {
        cout << "Value not found\n";
        return;
    }
    prev->next = p->next;
    delete p;
}

void deleteByPosition(Node*& head, int pos) {
    if (head == NULL || pos <= 0) {
        cout << "Invalid position or empty list\n";
        return;
    }

    if (pos == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* p = head;
    Node* prev = NULL;
    for (int i = 1; i < pos && p != NULL; i++) {
        prev = p;
        p = p->next;
    }
    if (p == NULL) {
        cout << "Position out of range\n";
        return;
    }
    prev->next = p->next;
    delete p;
}

void display(Node* head) {
    Node* p = head;
    while (p != NULL) {
        cout << p->data << " -> ";
        p = p->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = NULL;

    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "Original List: ";
    display(head);

    deleteByValue(head, 20);
    cout << "After deleting value 20: ";
    display(head);

    deleteByPosition(head, 2);
    cout << "After deleting position 2: ";
    display(head);

    return 0;
}
