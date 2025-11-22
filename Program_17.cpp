#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int val){
    Node* t = new Node;
    t->data = val;
    t->left = NULL;
    t->right = NULL;
    return t;
}

void preorder(Node* root){
    if(root == NULL) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(Node* root){
    if(root == NULL) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void postorder(Node* root){
    if(root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main(){
    Node* root = createNode(1);
    root->left = createNode(3);
    root->right = createNode(7);
    root->left->left = createNode(4);
    root->left->right = createNode(6);
    root->right->left = createNode(25);

    cout<<"Preorder: ";
    preorder(root);

    cout<<"\nInorder: ";
    inorder(root);

    cout<<"\nPostorder: ";
    postorder(root);

    return 0;
}


