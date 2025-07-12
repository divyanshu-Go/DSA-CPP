
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

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftHt = height(root->left);
    int rightHt = height(root->right);

    return max(leftHt, rightHt) + 1;
}



int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = buildTree(preorder);
    cout <<  root->data <<endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    hcout<<"Height of tree :"<< height(root)<<endl;

    return 0;
}