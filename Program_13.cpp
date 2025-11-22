#include <iostream>
using namespace std;

struct Stack{
    int top;
    int size;
    int arr[100];
};

Stack s1, s2;

void push1(int x){
    s1.arr[++s1.top] = x;
}

int pop1(){
    return s1.arr[s1.top--];
}

void push2(int x){
    s2.arr[++s2.top] = x;
}

int pop2(){
    return s2.arr[s2.top--];
}

void enqueue(int x){
    push1(x);
}

int dequeue(){
    if(s1.top==-1 && s2.top==-1)
        return -1;
    if(s2.top==-1){
        while(s1.top!=-1){
            push2(pop1());
        }
    }
    return pop2();
}

void display(){
    if(s1.top==-1 && s2.top==-1){
        cout<<"Empty";
        return;
    }
    if(s2.top!=-1){
        for(int i=s2.top;i>=0;i--)
            cout<<s2.arr[i]<<" ";
        for(int i=0;i<=s1.top;i++)
            cout<<s1.arr[i]<<" ";
    }else{
        for(int i=0;i<=s1.top;i++)
            cout<<s1.arr[i]<<" ";
    }
}

int main(){
    s1.top=-1; s2.top=-1;
    int n,x,ch;
    cout<<"Enter number of operations: ";
    cin>>n;
    while(n--){
        cout<<"1 Enqueue  2 Dequeue  3 Display: ";
        cin>>ch;
        if(ch==1){
            cin>>x;
            enqueue(x);
        }else if(ch==2){
            cout<<dequeue()<<endl;
        }else{
            display();
            cout<<endl;
        }
    }
    return 0;
}
