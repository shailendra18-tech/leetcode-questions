void makingSubsets(vector<vector<int>>& ans, vector<int>& nums, int idx, int size, int n, vector<int>& temp){
    if(idx==n){
        vector<int> tmp(temp.begin(),temp.begin()+size);
        ans.push_back(tmp);
         return;
    }
   //yes 
    temp[size]=nums[idx];
    makingSubsets(ans,nums,idx+1,size+1,n,temp);
   //no
     makingSubsets(ans,nums,idx+1,size,n,temp);
    
    
}


class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> ans;
        if(n==0){
            return ans;
        }
        
        vector<int> temp(n);
        makingSubsets(ans,nums,0,0,n,temp);
        
        return ans;
    }
};