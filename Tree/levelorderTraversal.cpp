
#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
    int data;
    Node *left;
    Node *right;

    void Node(int val)
    {
        data = val;
        left = right = NULL;
    }
}

static int idx = -1;
class buildTree(vector<int> preorder)
{
    idx++;
    if (preorder[idx] == -1)
        return NULL;

    Node *root = new Node(preorder[idx]);
    root->left = buildTree(preorder);
    root->right = buildTree(preorder);

    return root;
}

void
levelorder(Node *root)
{
    queue<Node> q;

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

    Node *root = buildTree(preorder);
    cout << root->data << endl;
    cout << root->left->data << endl;
    cout << root->right->data << endl;

    inorder(root);

    return 0;
}