#include<iostream>
using namespace std;
 struct stack{
    int size;
    int top;
    int *arr;
 };
 struct stack* s =(struct stack*)malloc(sizeof(struct stack));
 void display(){
    for(int i=0;i<=s->top;i++){
        cout<<s->arr[i]<<" ";
    }
 }
 void push(int val){
    if(s->top==s->size-1)
    cout<<"Stack Overflow";
    else{
        s->top++;
        s->arr[s->top]=val;
    }
 }
 int pop(){
    if(s->top==-1)
    return -1;
    else{
        int x=s->arr[s->top];
        s->top--;
        return x;
    }
 }
 int peek(int i){
    if(s->top-i+1<0)
    return -1;
    else{
        return s->arr[s->top-i+1];
    }
 }
 int main(){
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc((s->size)*sizeof(int));
    int n,x;
    cout<<"Enter number of stack elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>x;
        push(x);
    }
    cout<<"The stack is: ";
    display();
    char flag;
    cout<<endl;
    cout<<"Do you want to pop an element (1/0):";
    cin>>flag;
    if(flag){
        int p=pop();
        cout<<"the element popped is: "<<p<<endl;
    }
    cout<<"current stack is: ";
    display();
    int pos,val;
    cout<<endl;
    cout<<"Enter the position of element you want to check: ";
    cin>>pos;
    val=peek(pos);
    cout<<"Value at the stated position is: "<<val;

}