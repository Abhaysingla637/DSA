#include <iostream>
using namespace std;

int tree[100];
int n = 0;

void createTree() {
    cout<<"Enter number of nodes: ";
    cin>>n;
    cout<<"Enter elements level-wise: ";
    for(int i=1;i<=n;i++){
        cin>>tree[i];
    }
}

void displayTree() {
    for(int i=1;i<=n;i++){
        cout<<"Index "<<i<<": "<<tree[i]<<endl;
    }
}

int main() {
    createTree();
    displayTree();
    return 0;
}
