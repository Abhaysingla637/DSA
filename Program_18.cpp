#include <iostream>
using namespace std;

int heapArr[100];
int n;

void heapify(int i){
    int largest = i;
    int l = 2*i;
    int r = 2*i+1;
    if(l <= n && heapArr[l] > heapArr[largest])
        largest = l;
    if(r <= n && heapArr[r] > heapArr[largest])
        largest = r;
    if(largest != i){
        int t = heapArr[i];
        heapArr[i] = heapArr[largest];
        heapArr[largest] = t;
        heapify(largest);
    }
}

void buildMaxHeap(){
    for(int i=n/2;i>=1;i--)
        heapify(i);
}

int main(){
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=1;i<=n;i++)
        cin>>heapArr[i];
    buildMaxHeap();
    cout<<"Max Heap: ";
    for(int i=1;i<=n;i++)
        cout<<heapArr[i]<<" ";
    return 0;
}
