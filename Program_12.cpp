#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

struct queuex{
    node* front;
    node* rear;
};

queuex* q;

void enqueue(int val){
    node* n=new node;
    n->data=val;
    n->next=NULL;
    if(q->rear==NULL){
        q->front=n;
        q->rear=n;
    }
    else{
        q->rear->next=n;
        q->rear=n;
    }
}

int dequeue(){
    if(q->front==NULL) return -1;
    node* temp=q->front;
    int x=temp->data;
    q->front=q->front->next;
    if(q->front==NULL) q->rear=NULL;
    delete temp;
    return x;
}

int peek(){
    if(q->front==NULL) return -1;
    return q->front->data;
}

void display(){
    if(q->front==NULL){
        cout<<"Queue is empty\n";
        return;
    }
    node* t=q->front;
    while(t){
        cout<<t->data<<" ";
        t=t->next;
    }
    cout<<endl;
}

int main(){
    q=new queuex;
    q->front=NULL;
    q->rear=NULL;

    int ch,val;

    while(1){
        cout<<"Choose one: 1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit ";
        cin>>ch;

        if(ch==1){
            cout<<"Enter value: ";
            cin>>val;
            enqueue(val);
        }
        else if(ch==2){
            int x=dequeue();
            if(x==-1) cout<<"Queue Underflow\n";
            else cout<<"Dequeued "<<x<<endl;
        }
        else if(ch==3){
            int x=peek();
            if(x==-1) cout<<"Queue Empty\n";
            else cout<<"Front = "<<x<<endl;
        }
        else if(ch==4){
            display();
        }
        else if(ch==5){
            break;
        }
        else{
            cout<<"Invalid choice\n";
        }
    }

    return 0;
}
