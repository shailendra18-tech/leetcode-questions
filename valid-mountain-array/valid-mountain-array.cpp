class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3){
            return false;
        }
        if(arr[0]>=arr[1] || arr[n-1]>=arr[n-2]){
            return false;
        }
        int i=0;
        for(; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                break;
            }
        }
        for(int j=0; j<i; j++){
            if(arr[j]>=arr[j+1]){
                return false;
            }
        }
        for(int j=i; j<n-1;j++){
            if(arr[j]<=arr[j+1]){
                return false;
            }
        }
        
        return true;
    }
};