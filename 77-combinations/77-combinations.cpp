void combi(vector<int>& temp, int i, vector<vector<int>>& ans, int sz, int n, int k, vector<int>& arr){
    if(sz==k){
        ans.push_back(temp);
        return;
    }
    if(i>=n){
        return;
    }
    for(int j=i; j<n; j++){
    temp[sz]=arr[j];
    combi(temp, j+1, ans, sz+1, n, k, arr);
   }
}

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp(k);
        vector<int> arr;
        for(int i=0; i<n; i++){
            arr.push_back(i+1);
        }
        combi(temp, 0, ans, 0, n, k,arr);
        return ans;
    }
};