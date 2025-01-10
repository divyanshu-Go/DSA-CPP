#include <bits/stdc++.h>
using namespace std;

// Check if it is safe to place a queen at (row, col)
bool isSafe(int row, int col, vector<string> &board, int n) {
    // Check the same column
    for (int i = row - 1; i >= 0; i--)
        if (board[i][col] == 'Q') return false;

    // Check the upper-left diagonal
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 'Q') return false;

    // Check the upper-right diagonal
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 'Q') return false;

    return true;
}

// Backtracking function to solve N-Queens
void solveNQueens(int n, int row, vector<string> &board, vector<vector<string>> &result) {
    if (row == n) {
        result.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++) {
        if (isSafe(row, col, board, n)) {
            board[row][col] = 'Q'; // Place a queen
            solveNQueens(n, row + 1, board, result); // Recur for the next row
            board[row][col] = '.'; // Backtrack
        }
    }
}

// Main function to find all solutions
vector<vector<string>> solveNQueens(int n) {
    vector<vector<string>> result;
    vector<string> board(n, string(n, '.')); // Create an empty board
    solveNQueens(n, 0, board, result);
    return result;
}

int main() {
    int n = 4; // Change this value for different board sizes
    vector<vector<string>> solutions = solveNQueens(n);

    // Print all solutions
    for (const auto &solution : solutions) {
        for (const auto &row : solution)
            cout << row << endl;
        cout << endl;
    }

    return 0;
}
