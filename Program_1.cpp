#include<iostream>
using namespace std;
int fibonacci(int n){
    //Special case for first two elenments 
    if(n<=1)
    return n;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cout<<"Enter the number of elements in series: ";
    cin>>n;

    //Printing the series
    cout<<"The Fibonnaci series is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<fibonacci(i)<<" ";
    }
}