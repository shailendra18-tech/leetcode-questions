void uniqueCombination(vector<vector<int>>& ans, vector<int>& temp, vector<int>& candidates, int i, int target){
    if(target==0){
        ans.push_back(temp);
        return;
    }
    if(i>=candidates.size() || target<0){
        return;
    }
    for(int j=i; j<candidates.size(); j++){
        temp.push_back(candidates[j]);
         uniqueCombination(ans, temp, candidates, j, target-candidates[j]);
        temp.pop_back();
    }
    
}


class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(), candidates.end());
        uniqueCombination(ans, temp, candidates, 0, target);
        
        return ans;
    }
};