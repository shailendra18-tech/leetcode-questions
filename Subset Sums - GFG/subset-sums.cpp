// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends

void sums(vector<int>& arr, int N, int i, int sum, vector<int>& ans){
    if(i>=N){
        ans.push_back(sum);
        return;
    }
    
    sum+=arr[i];
    sums(arr, N, i+1, sum, ans);
    sum-=arr[i];
    sums(arr, N, i+1, sum, ans);
}
class Solution
{
public:
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        sort(arr.begin(), arr.end());
        vector<int> ans;
        sums(arr, N, 0, 0, ans);
        return ans;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends