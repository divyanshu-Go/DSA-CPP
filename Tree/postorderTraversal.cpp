
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


int idx = -1;
Node* buildTree(vector<int>& preorder){
    idx++;
    if(preorder[idx] == -1) return NULL;

    Node* root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void postorder(Node* root){
    if(root == NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}



int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    cout <<  root->data <<endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    postorder(root);

    return 0;
}