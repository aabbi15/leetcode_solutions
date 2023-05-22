class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        
        int last=nums.size()-1;
        int i=last;
        for(i;i>=0;i--){
            if(nums[i]+i>=last)
                last=i;
        }
        
        if(last==0) return true;
        else return false;
        
    }
};