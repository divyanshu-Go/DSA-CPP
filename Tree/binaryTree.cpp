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


int main(){
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    int idx = -1;
    Node* root = buildTree(preorder, idx);
    cout <<  root->data <<endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;


    return 0;
}