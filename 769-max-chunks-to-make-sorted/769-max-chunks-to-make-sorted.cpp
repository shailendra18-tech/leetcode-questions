class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        //points where index idx and prefix max are equal
        
        int cmax=INT_MIN; //current max
        int ans=0;
        for(int i=0; i<arr.size(); i++){
            cmax=max(arr[i],cmax);
            if(cmax==i){
                ans++;
            }
        }
        
        return ans;
        
    }
};