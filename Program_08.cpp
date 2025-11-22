#include <iostream>
using namespace std;

int base;

int rowMajor(int c,int i,int j,int w){
    return base + ( (i-1)*c + j ) * w;
}

int colMajor(int r,int i,int j,int w){
    return base + ( (j-1)*r + i ) * w;
}

int main(){
    int rows,cols,i,j,w;
    cout<<"Enter base address: ";
    cin>>base;
    cout<<"Enter number of rows and columns: ";
    cin>>rows>>cols;
    cout<<"Enter index of element (i j): ";
    cin>>i>>j;
    cout<<"Enter size of each element in bytes: ";
    cin>>w;
    cout<<"Row-major address: "<<rowMajor(cols,i,j,w)<<endl;
    cout<<"Column-major address: "<<colMajor(rows,i,j,w);
}
