void balanceParenthesis(vector<string>& ans, int n, int l, int r, int i, char s[]){
    if(i==2*n){
        string str="";
        for(int i=0; i<2*n; i++){
            str+=s[i];
        }
        ans.push_back(str);
        return;
    }
    
    if(l==r){
        s[i]='(';
        balanceParenthesis(ans, n, l+1, r, i+1, s);
    }
    else if(l>r){
        if(l==n){
            s[i]=')';
        balanceParenthesis(ans, n, l, r+1, i+1, s);
        }
        else{
            s[i]='(';
        balanceParenthesis(ans, n, l+1, r, i+1, s);
            s[i]=')';
        balanceParenthesis(ans, n, l, r+1, i+1, s);
        }
    }
}

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        
        char s[2*n];
        balanceParenthesis(ans, n, 0, 0, 0, s);
        
        return ans;
    }
};