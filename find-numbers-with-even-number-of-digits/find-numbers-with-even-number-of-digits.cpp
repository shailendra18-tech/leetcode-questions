int digit(int a){
    int c=0;
    while(a>0){
        a=a/10;
        c++;
    }
    return c;
}

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(digit(nums[i])%2==0){
                ans++;
            }
        }
        return ans;
    }
};