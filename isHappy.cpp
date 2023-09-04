class Solution {
public:
    int solve(int n){
        int sum=0;
        while(n>0){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow=solve(n);
        int fast=solve(solve(n));
        while(slow!=fast && slow!=1){
            slow=solve(slow);
            fast=solve(solve(fast));
        }
        return slow==1;
    }
};
