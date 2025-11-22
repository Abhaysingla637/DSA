#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(Node*& head, int value) {
    Node* temp = new Node;
    temp->data = value;
    temp->next = head;
    head = temp;
}

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

void insertAtPosition(Node*& head, int value, int pos) {
    if (pos == 1) {
        insertAtBeginning(head, value);
        return;
    }

    Node* p = head;
    for (int i = 1; i < pos - 1 && p != NULL; i++)
        p = p->next;

    if (p == NULL) {
        cout << "Invalid position\n";
        return;
    }

    Node* temp = new Node;
    temp->data = value;
    temp->next = p->next;
    p->next = temp;
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

    insertAtBeginning(head, 10);
    insertAtBeginning(head, 5);
    insertAtEnd(head, 30);
    insertAtPosition(head, 20, 3); 

    cout << "Linked List: ";
    display(head);

    return 0;
}
