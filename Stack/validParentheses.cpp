#include<iostream>
#include<unordered_map>
#include<stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        unordered_map<char, char> mp;
        mp['{'] = '}';
        mp['('] = ')';
        mp['['] = ']';

        
        for(int i=0; i<s.length(); i++){
            if(s[i] == '{' || s[i] == '(' || s[i] == '['){
                p.push(s[i]);
            } else if(!p.empty() && mp[p.top()] == s[i]){
                p.pop();
            } else {
                return false;
            }
        }
        if(!p.empty()) return false;
        return true;
    }
};

int main(){
    Solution s;
    string str = "{()}";

    cout << s.isValid(str) ;
}