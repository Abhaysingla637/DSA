#include<iostream>
using namespace std;
long long fact(int n){
    //User inputs a negative integer value
    if (n<0)
    return -1;
    //Special case for factorial of 0 and 1
    else if(n==0 || n==1)
    return 1;
    else return n*fact(n-1);
}
int main(){
    int num;
    cout<<"Enter any whole number: ";
    cin>>num;
    cout<<"The factorial of given number is: "<<fact(num);
}
