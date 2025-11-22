#include <iostream>
using namespace std;

struct queuex{
    int size;
    int front;
    int rear;
    int *arr;
};

queuex* q = new queuex;

int isFull(){
    return q->rear == q->size - 1;
}

int isEmpty(){
    return q->front == -1 || q->front > q->rear;
}

void enqueue(int val){
    if(isFull()){
        cout<<"Queue Overflow\n";
    }
    else{
        if(q->front == -1) q->front = 0;
        q->rear++;
        q->arr[q->rear] = val;
    }
}

int dequeue(){
    if(isEmpty()) return -1;
    int x = q->arr[q->front];
    q->front++;
    return x;
}

int peek(){
    if(isEmpty()) return -1;
    return q->arr[q->front];
}

void display(){
    if(isEmpty()){
        cout<<"Queue is empty\n";
        return;
    }
    for(int i = q->front; i <= q->rear; i++){
        cout<<q->arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, ch, val;
    cout<<"Enter size of queue: ";
    cin>>n;

    q->size = n;
    q->front = -1;
    q->rear = -1;
    q->arr = new int[n];

    while(1){
        cout<<"Choose one: 1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Exit"<<endl;
        cin>>ch;

        if(ch == 1){
            cout<<"Enter value: ";
            cin>>val;
            enqueue(val);
        }
        else if(ch == 2){
            int x = dequeue();
            if(x == -1) cout<<"Queue Underflow\n";
            else cout<<"Dequeued "<<x<<endl;
        }
        else if(ch == 3){
            int x = peek();
            if(x == -1) cout<<"Queue Empty\n";
            else cout<<"Front = "<<x<<endl;
        }
        else if(ch == 4){
            display();
        }
        else if(ch == 5){
            break;
        }
        else{
            cout<<"Invalid choice\n";
        }
    }

    return 0;
}
