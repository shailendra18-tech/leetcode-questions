bool isPalindrome(string s, int i, int j){
    while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }
        else{
            return false;
            
        }
    }
    return true;
}

class Solution {
public:
    bool validPalindrome(string s) {
       int n=s.length();
        
        int p1=0,p2=n-1;
        while(p1<p2){
            if(s[p1]==s[p2]){
                p1++;
                p2--;
            }
            else{
                return isPalindrome(s, p1+1, p2)|| isPalindrome(s, p1, p2-1);
            }
        }
        
        return true;
    }
};