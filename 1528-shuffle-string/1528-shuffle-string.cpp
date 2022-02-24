class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        vector<char> c(n);
        for(int i=0; i<n; i++){
            c[indices[i]]=s[i];
        }
        string ans="";
        
        for(int i=0; i<n; i++){
            ans+=c[i];
        }
        
        return ans;
    }
};