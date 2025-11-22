#include <iostream>
using namespace std;

int adj[20][20], n;
int visited[20];

void readGraph(){
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter adjacency matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>adj[i][j];
        }
    }
}

void BFS(int start){
    for(int i=0;i<n;i++)
        visited[i] = 0;

    int q[20], front = 0, rear = -1;
    visited[start] = 1;
    q[++rear] = start;

    while(front <= rear){
        int u = q[front++];
        cout<<u<<" ";
        for(int v=0; v<n; v++){
            if(adj[u][v]==1 && visited[v]==0){
                visited[v] = 1;
                q[++rear] = v;
            }
        }
    }
}

int main(){
    readGraph();
    int start;
    cout<<"Enter starting vertex: ";
    cin>>start;
    cout<<"BFS: ";
    BFS(start);
    return 0;
}
