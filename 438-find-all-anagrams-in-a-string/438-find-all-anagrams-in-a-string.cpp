class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
       vector<int> ans;
        if(s.length()<p.length()){
            return ans;
        }
        
        int s_len=s.length();
        int p_len=p.length();
        
        vector<int> freq_p(26,0);
        vector<int> freq_window(26,0);
        
        for(int i=0; i<p_len; i++){ //storing frequency of characters in p
            freq_p[p[i]-'a']++;
        }
        //first window freq
        for(int i=0; i<p_len; i++){
            freq_window[s[i]-'a']++;
        }
        
        if(freq_p==freq_window){
            ans.push_back(0);
        }
        //for other window
        for(int i=p_len; i<s_len; i++){
            freq_window[s[i-p_len]-'a']--;
            freq_window[s[i]-'a']++;
            
            if(freq_p==freq_window){
                ans.push_back(i-p_len+1);
            }
        }
        
        return ans;
        
    }
};