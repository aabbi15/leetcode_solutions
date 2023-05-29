class Solution {
    unordered_map<int,int> mymap;
    
public:
    
    int fxn(vector<int>& nums,int n){
        if(n==0) return nums[0];
        if(n<0) return 0;
        
        if(mymap.find(n)!=mymap.end()){
            return mymap[n];
        }
        
        int inc,exc;
        inc=fxn(nums,n-2)+nums[n];
        exc=fxn(nums,n-1);
        
        mymap[n]=max(inc,exc);
        return mymap[n];
        
    }
    int rob(vector<int>& nums) {
        return fxn(nums,nums.size()-1);
    }
};