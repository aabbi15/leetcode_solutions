class Solution {
    unordered_map<int,int> m;
    
public:
    
    int fxn (vector<int> cost,int n){
        if (n==0) return cost[0];
        if(n<0) return 0;
       // if(k==1) return cost[1];
        
        if(m.find(n)!=m.end()){
            return m[n];
        }
        
        int take_next, leave_next;
        
        
        
        take_next=cost[n]+fxn(cost,n-1);
        leave_next=cost[n]+fxn(cost,n-2);
        
        m[n]=min(take_next,leave_next);
        
        return m[n];
        
        
        
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        cost.push_back(0);
        return fxn(cost,n);
            
            
        
        
    }
};