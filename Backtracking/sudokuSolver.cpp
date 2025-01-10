#include <bits/stdc++.h>
using namespace std;

// Check if it's safe to place a number at (row, col)
bool isSafe(int row, int col, char val, vector<vector<char>> &board) {
    // Check the row and column
    for (int i = 0; i < 9; i++) {
        if (board[row][i] == val || board[i][col] == val)
            return false;
    }

    // Check the 3x3 subgrid
    int sr = (row / 3) * 3, sc = (col / 3) * 3;
    for (int i = sr; i < sr + 3; i++) {
        for (int j = sc; j < sc + 3; j++) {
            if (board[i][j] == val)
                return false;
        }
    }
    return true;
}

// Solve the Sudoku puzzle using backtracking
bool solve(vector<vector<char>> &board, int row, int col) {
    if (row == 9) return true; // Reached the end of the board

    // Move to the next cell
    int nextRow = row, nextCol = col + 1;
    if (nextCol == 9) {
        nextRow++;
        nextCol = 0;
    }

    // If the cell is already filled, skip to the next
    if (board[row][col] != '.') {
        return solve(board, nextRow, nextCol);
    }

    // Try placing numbers 1-9
    for (char num = '1'; num <= '9'; num++) {
        if (isSafe(row, col, num, board)) {
            board[row][col] = num; // Place the number
            if (solve(board, nextRow, nextCol)) return true; // Recur for the next cell
            board[row][col] = '.'; // Backtrack
        }
    }
    return false; // No solution for this configuration
}

// Main function to solve Sudoku
void solveSudoku(vector<vector<char>> &board) {
    solve(board, 0, 0);
}

int main() {
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}
    };

    solveSudoku(board);

    // Print the solved Sudoku board
    for (const auto &row : board) {
        for (const auto &cell : row) {
            cout << cell << " ";
        }
        cout << endl;
    }

    return 0;
}
