class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        double a=myPow(x,n/2);
        if(n%2==0){
            return a*a;
        }
        else if(n<0 && n%2!=0){
            return (a*a)/x;
        }
        return a*a*x;
    }
};