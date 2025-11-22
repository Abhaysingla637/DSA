#include<iostream>
using namespace std;

int arr[50];

int binarysearch(int n,int key){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}

void traverse(int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,key;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter sorted array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The entered array is: ";
    traverse(n);
    cout<<endl<<"Enter value to search: ";
    cin>>key;
    int idx=binarysearch(n,key);
    if(idx==-1)
        cout<<"Element not found";
    else
        cout<<"Element found at index "<<idx;
}