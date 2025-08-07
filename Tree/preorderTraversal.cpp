
#include <iostream>
#include <vector>
using namespace std;


class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data=val;
        left=right=NULL;
    }
};



Node* buildTree(vector<int> preorder, int& idx){
    idx++;
    if(preorder[idx] == -1) return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder, idx);
    root->right = buildTree(preorder, idx);

    return root;
}


void preorder(Node* root){
    if(root == NULL){
        return;
    }
    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}



int main(){
    vector<int> preorderTree = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = -1;
    Node* root = buildTree(preorderTree, idx);
    cout <<  root->data <<endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    preorder(root);

    return 0;
}