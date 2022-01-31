bool Palindrome(string ans){
    int n=ans.length();
    if(n==1){
        return true;
    }
    for(int i=0; i<n/2; i++){
        if(ans[i]!=ans[n-i-1]){
            return false;
        }
    }
    return true;
}


class Solution {
public:
    bool isPalindrome(string s) {
        string ans="";
        transform(s.begin(), s.end(), s.begin(),:: tolower);
        for(int i=0; i<s.length(); i++){
            if((s[i]>=48 && s[i]<=57) || (s[i]>=97 && s[i]<=122)){
                ans+=s[i];
            }
        }
        return Palindrome(ans);
    }
};