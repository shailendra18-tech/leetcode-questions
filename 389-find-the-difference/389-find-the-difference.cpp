class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26]={0};
        for(int i=0; i<s.length(); i++){
            freq[s[i]-'a']++;
            freq[t[i]-'a']++;
        }
        freq[t[t.length()-1]-'a']++;
        char ans;
        for(int i=0; i<26; i++){
            if(freq[i]%2!=0){
                ans=i+'a';
            }
        }
        
        return ans;
    }
};