class Solution {
public:
    bool detectCapitalUse(string word) {
        int c=0;
        for(int i=0; i<word.length(); i++){
            if(word[i]>=65 && word[i]<=90){
                c++;
            }
        }
        
        if(c==0 || c==word.length()){
            return true;
        }
        else if(c==1 && word[0]>=65 && word[0]<=90){
            return true;
        }
        return false;
    }
};