void validCombination(vector<int>& temp, vector<int>& arr, vector<vector<int>>& ans, int i, int sz, int n, int k){
    if(sz==k && n==0){
        ans.push_back(temp);
        return;
    }
    if(i>=9 || n<0){
        return;
    }
    for(int j=i; j<9; j++){
    temp.push_back(arr[j]);
    validCombination(temp, arr, ans, j+1, sz+1, n-arr[j], k);
    temp.pop_back();
    }
}


class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> arr;
        for(int i=0; i<9; i++){
            arr.push_back(i+1);
        }
        vector<int> temp;
        
        validCombination(temp, arr, ans, 0, 0, n, k);
        return ans;
    }
};