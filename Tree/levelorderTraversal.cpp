
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};


Node* buildTree(vector<int>& preorder, int &idx)
{
    idx++;
    if (preorder[idx] == -1)
        return NULL;

    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder,idx);
    root->right = buildTree(preorder,idx);

    return root;
}

void levelorder(Node *root)
{
    queue<Node*> q;

    q.push(root);

    while (q.size() > 0)
    {
        Node *curr = q.front();
        q.pop();

        cout << curr->data << " ";

        if (curr->left != NULL)
        {
            q.push(curr->left);
        }
        if (curr->right != NULL)
        {
            q.push(curr->right);
        }
    }
    cout << endl;
}

int main()
{
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    int idx = -1;
    Node *root = buildTree(preorder, idx);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    levelorder(root);

    return 0;
}