class Solution {
public:
    int climbStairs(int n) {
        long a=0;
        long b=1;
        long c=a+b;
        
        for(int i=0;i<n+1;i++){
            c=a+b;
            a=b;
            b=c;
        }
        
        return a;
        
    }
};