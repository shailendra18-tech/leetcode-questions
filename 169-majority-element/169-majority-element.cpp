class Solution {
public:
    int majorityElement(vector<int>& nums) {
       unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto i=mp.begin(); i!=mp.end(); i++){
            if(i->second>nums.size()/2){
                ans=i->first;
            }
        }
        return ans;
    }
};