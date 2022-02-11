void permute(vector<vector<int>>& ans, vector<int>& nums, int i){
    if(i>=nums.size()-1){
        ans.push_back(nums);
        return;
    }
    int freq[21]={0};
    for(int j=i; j<nums.size(); j++){
        if(freq[nums[j]+10]==0){
            swap(nums[i], nums[j]);
            permute(ans, nums, i+1);
            swap(nums[i], nums[j]);
        }
        
        freq[nums[j]+10]++;
    }
}


class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        permute(ans, nums, 0);
        return ans;
    }
};