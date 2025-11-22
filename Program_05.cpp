#include <iostream>
using namespace std;

int arr[50];

void traverse(int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void bubblesort(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        cout<<"After pass "<<i+1<<": ";
        traverse(n);
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The entered array is: ";
    traverse(n);
    cout<<endl;
    bubblesort(n);
    cout<<"Final sorted array: ";
    traverse(n);
}
