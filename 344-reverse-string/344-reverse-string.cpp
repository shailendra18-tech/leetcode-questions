void swap(int& i, int& j, vector<char>& s){
    swap(s[i],s[j]);
    i++;
    j--;
}


class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0;
        int j=s.size()-1;
        while(i<j){
            swap(i,j,s);
        }
    }
};