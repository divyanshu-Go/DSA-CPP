#include <bits/stdc++.h>
using namespace std;

bool isSafe(vector<vector<int>> &mat, int row, int col, vector<vector<bool>> &visit){
    if(row<0 || row>=mat.size() || col<0 || col>=mat[0].size())
        return false;
    if(mat[row][col] == 0 || visit[row][col])
        return false;

    return true;
}

void helper(vector<vector<int>> &mat, int row, int col, vector<string> &ans, string path, vector<vector<bool>> &visit){

    if(row==mat.size()-1 && col==mat[0].size()-1){
        ans.push_back(path);
        return;
    }

    visit[row][col]=true;

    if(isSafe(mat,row+1,col,visit)){
        helper(mat,row+1,col,ans,path+'D',visit);         //Down
    }
    if(isSafe(mat,row-1,col,visit)){
        helper(mat,row-1,col,ans,path+'U',visit);         //Up
    }
    if(isSafe(mat,row,col+1,visit)){
        helper(mat,row,col+1,ans,path+'R',visit);         //Right
    }
    if(isSafe(mat,row,col-1,visit)){
        helper(mat,row,col-1,ans,path+'L',visit);         //Left
    }

    visit[row][col]=false;

}


vector<string> findPath(vector<vector<int>> &mat){
    vector<string> ans;
    int n=mat.size();
    int m=mat[0].size();
    vector<vector<bool>> visit(n, vector<bool>(m, false));
    string path="";
    helper(mat, 0, 0, ans, path, visit);
    return ans;
}


int main(){
    
    vector<vector<int>> mat={ {1,0,0,0}, {1,0,1,1}, {1,1,0,0}, {0,1,1,1} , {1,0,1,1}};

    vector<string> ans= findPath(mat);
    for(string i:ans){
        cout<<i<<endl;
    }

    return 0;
}