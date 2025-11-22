#include<iostream>
using namespace std;

int arr[10];

void traverse(int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void insertion(int &n,int pos1,int val){
    for(int i=n;i>pos1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos1]=val;
    n++;
}

void deletion(int &n,int pos2){
    for(int i=pos2;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
}

int main(){
    int n,val,pos,pos2;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The entered array is: ";
    traverse(n);
    cout<<endl<<"Enter value and position of the element to be inserted: ";
    cin>>val>>pos;
    insertion(n,pos,val);
    cout<<"The new array is: ";
    traverse(n);
    cout<<endl<<"Enter position of the element to be deleted: ";
    cin>>pos2;
    deletion(n,pos2);
    cout<<"The new array is: ";
    traverse(n);
}






