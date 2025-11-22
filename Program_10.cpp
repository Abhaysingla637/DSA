#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

struct stack{
    Node* top;
};

stack s;

void push(int val){
    Node* temp = new Node;
    temp->data = val;
    temp->next = s.top;
    s.top = temp;
}

void pop(){
    if(s.top == NULL){
        cout<<"Stack Underflow";
        return;
    }
    Node* temp = s.top;
    s.top = s.top->next;
    delete temp;
}

void peek(){
    if(s.top == NULL){
        cout<<"Stack is empty";
        return;
    }
    cout<<"Top element: "<<s.top->data;
}

void display(){
    if(s.top == NULL){
        cout<<"Stack is empty";
        return;
    }
    Node* t = s.top;
    while(t != NULL){
        cout<<t->data<<" ";
        t = t->next;
    }
}

int main(){
    s.top = NULL;
    int ch,val;
    cout<<"1.Push 2.Pop 3.Peek 4.Display 5.Exit"<<endl;
    cout<<"Enter your choice: ";
    cin>>ch;
    while(ch != 5){
        if(ch == 1){
            cout<<"Enter value: ";
            cin>>val;
            push(val);
        } else if(ch == 2){
            pop();
        } else if(ch == 3){
            peek();
        } else if(ch == 4){
            display();
        }
        cout<<endl<<"Enter your choice: ";
        cin>>ch;
    }
}

