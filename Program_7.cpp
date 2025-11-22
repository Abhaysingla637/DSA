#include<iostream>
using namespace std;

void merge(int A[],int mid,int low,int high){
    int B[100];
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid && j<=high){
        if(A[i]<A[j]){
            B[k]=A[i];
            i++;
        }else{
            B[k]=A[j];
            j++;
        }
        k++;
    }
    while(i<=mid){
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=high){
        B[k]=A[j];
        j++;
        k++;
    }
    for(i=low;i<=high;i++){
        A[i]=B[i];
    }
}
void mergeSort(int A[],int l,int h){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        mergeSort(A,l,mid);
        mergeSort(A,mid+1,h);
        merge(A,mid,l,h);
    }
}
void display(int A[],int n){
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
}
int main(){
    int A[]={45,28,67,78,12,9};
    int size=sizeof(A)/sizeof(A[0]);
    cout<<"Current array is: ";
    display(A,size);
    cout<<endl;
    mergeSort(A,0,size-1);
    cout<<"The sorted array is: ";
    display(A,size);
}