class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod =1;
        int sum =0;
        while(n){
            prod = prod * (n%10);
            sum= sum + (n%10);
            n=n/10;
        }
        int ans = prod - sum;
        return ans;
    }
};