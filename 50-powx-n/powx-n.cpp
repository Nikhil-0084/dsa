class Solution {
public:
    double power(double x,long long  n){
        if(n==0) return 1;
        if(n==1) return x;
        if(n%2==0) return power(x*x,n/2);
        else return x*power(x,n-1);
    }
    double myPow(double x, int n) {
        int num = n;

        // If n is negative
        if (num < 0) {
    long long n = -(long long)num;
    return 1.0 / power(x, n);
}
        // If n is non-negative
        return power(x, num);
    }
};