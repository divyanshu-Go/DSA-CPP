
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


int NodeCount(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftC = NodeCount(root->left);
    int rightC = NodeCount(root->right);

    return leftC+rightC+1;
}



int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx= -1;
    
    Node* root = buildTree(preorder, idx);
    cout <<  root->data <<endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    cout << "No. of Nodes in tree :" << NodeCount(root)<<endl;

    return 0;
}