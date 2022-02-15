class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        //xor of same number is 0
        for(int i=0; i<nums.size(); i++){
            ans^=nums[i];
        }
        
        return ans;
    }
};