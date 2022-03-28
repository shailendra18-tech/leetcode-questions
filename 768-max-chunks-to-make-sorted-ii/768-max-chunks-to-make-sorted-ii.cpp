class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        vector<int> temp=arr;
        sort(temp.begin(), temp.end());
        long long sum_arr=0,sum_temp=0;
        int i=0;
        while(i<n){
            sum_arr+=arr[i];
            sum_temp+=temp[i];
            if(sum_arr==sum_temp){
                ans++;
                i++;
            }
            else{
                i++;
            }
        }
        
        return ans;
        
    }
};