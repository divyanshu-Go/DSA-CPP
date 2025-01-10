#include <bits/stdc++.h>
using namespace std;

void allSubset(vector<vector<int>> &op, vector<int> &arr, vector<int> &ans, int i)
{
    if (i == arr.size())
    {
        op.push_back(ans);
        return;
    }

    // include
    ans.push_back(arr[i]);
    allSubset(op, arr, ans, i + 1);

    ans.pop_back(); // Backtracking
    // exclude
    allSubset(op, arr, ans, i + 1);
}


int main()
{
    vector<int> arr = {1, 2, 3};
    vector<vector<int>> op;
    vector<int> ans;
    int i = 0;
    allSubset(op, arr, ans, i);

    for (vector<int> i : op)
    {
        for (int j : i)
            cout << j << " ";
        cout << endl;
    }
}
