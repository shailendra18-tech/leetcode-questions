void rightRotate(vector<int>& nums, int i, int j){
    if(i==j){
        return;
    }
    int a=nums[j];
    for(int k=j; k>i; k--){
        nums[k]=nums[k-1];
    }
    nums[i]=a;
}

void leftRotate(vector<int>& nums, int i, int j){
    if(i==j){
        return;
    }
    int a=nums[i];
    for(int k=i; k<j; k++){
        nums[k]=nums[k+1];
    }
    nums[j]=a;
}


void permutation(vector<vector<int>>& ans, vector<int>& nums, int i){
    if(i>=nums.size()-1){
        ans.push_back(nums);
        return;
    }
    
    for(int j=i; j<nums.size(); j++){
        rightRotate(nums, i, j);
        permutation(ans, nums, i+1);
        leftRotate(nums, i, j);
    }
}

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        permutation(ans, nums, 0);
        
        return ans;
        
    }
};