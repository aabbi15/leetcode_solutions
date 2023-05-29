class Solution {
    unordered_map<int,int> done;
public:
    int fib(int n) {
        
        if(done.find(n)!=done.end())
            return done[n];
        
        
        
        if(n==0) return 0;
        if(n==1) return 1;
       // if(n==2) return 1;
        
        done[n]=fib(n-1)+fib(n-2);
        
        return done[n];
        
        
        
        
        
    }
};