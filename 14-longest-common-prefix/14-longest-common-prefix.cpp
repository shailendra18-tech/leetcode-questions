class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        sort(strs.begin(), strs.end());
        if(strs[0]==""){
            return "";
        }
        for(int i=0; i<strs[0].size(); i++){
            if(strs[0][i]==strs[strs.size()-1][i]){
                ans+=strs[0][i];
            }
            else{
                break;
            }
        }
        
        return ans;
    }
};