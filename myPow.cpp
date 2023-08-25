class Solution {
public:
    double myPow(double x, int n) {
        double res=1.0;
        int k=abs(n);
        while(k>0){
            if(k%2==1){
                res=res*x;
            }
            x=x*x;
            k=k>>1;
        }
        if(n>0)return res;
        else return 1/res;
    }
};
