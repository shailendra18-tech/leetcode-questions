class Solution {
public:
    int addDigits(int num) {
        long long ans=0;
        while(num>0){
            ans+=num%10;
            num/=10;
        }
        if(ans<10) return ans;
        
        return addDigits(ans);
    }
};