class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n=arr.size();
        if(arr.size()<2){
            return {-1};
        }
        
        int a[n];
        int curr_max=arr[n-1];
        for(int i=n-1; i>=0; i--){
            if(arr[i]>=curr_max){
                curr_max=arr[i];
                a[i]=curr_max;
            }
            else{
                a[i]=curr_max;
            }
        }
        
        arr[n-1]=-1;
        for(int i=n-2; i>=0; i--){
            arr[i]=a[i+1];
        }
        return arr;
        
    }
};