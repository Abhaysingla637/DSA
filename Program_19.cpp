#include <iostream>
using namespace std;

int adj[20][20];
int n;

void readGraph(){
    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> adj[i][j];
        }
    }
}

void displayGraph(){
    cout << "Graph (Adjacency Matrix):\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    readGraph();
    displayGraph();
    return 0;
}

