class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int i;
        for( i=0; i<nums.size(); i++){
            if(nums[i]>=0){
                break;
            }
        }
        int j=i-1;
        while(i<nums.size() && j>=0){
            if(nums[i]*nums[i]<nums[j]*nums[j]){
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
            else{
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        while(i<nums.size()){
            ans.push_back(nums[i]*nums[i]);
            i++;
        }
        while(j>=0){
            ans.push_back(nums[j]*nums[j]);
            j--;
        }
        
        return ans;
         
    }
};