
#include <iostream>
#include <vector>
using namespace std;


class Node{
    int data;
    Node* left;
    Node* right;

    void Node(int val){
        data=val;
        left=right=NULL;
    }
}


static int idx = -1;
class buildTree(vector<int> preorder){
    idx++;
    if(preorder[idx] == -1) return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void prerder(Node* root){
    if(root == NULL){
        return;
    }
    cout<< root->data << " ";
    preorder(root->left);
    preorder(root->right);
}



int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    cout <<  root->data <<endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    preorder(root);

    return 0;
}