#include <bits/stdc++.h>
using namespace std;

void helper(vector<vector<int>> &ans, vector<int> &comb, vector<int> &arr, int target, int i, int currentSum) {
    // If the current sum equals the target, add the combination to the result
    if (currentSum == target) {
        ans.push_back(comb);
        return;
    }

    // If the current sum exceeds the target or the index is out of bounds, stop recursion
    if (currentSum > target || i >= arr.size()) {
        return;
    }

    // Include the current element (can be included multiple times)
    comb.push_back(arr[i]);
    helper(ans, comb, arr, target, i, currentSum + arr[i]); // Stay at the same index
    comb.pop_back();

    // Exclude the current element and move to the next index
    helper(ans, comb, arr, target, i + 1, currentSum);
}

vector<vector<int>> combinationSum(vector<int> &arr, int target) {
    vector<vector<int>> ans;
    vector<int> comb;
    helper(ans, comb, arr, target, 0, 0);
    return ans;
}

int main() {
    vector<int> arr = {2, 3, 6, 7};
    int target = 7;

    vector<vector<int>> ans = combinationSum(arr, target);

    // Print the combinations
    for (const auto &comb : ans) {
        for (int num : comb) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
