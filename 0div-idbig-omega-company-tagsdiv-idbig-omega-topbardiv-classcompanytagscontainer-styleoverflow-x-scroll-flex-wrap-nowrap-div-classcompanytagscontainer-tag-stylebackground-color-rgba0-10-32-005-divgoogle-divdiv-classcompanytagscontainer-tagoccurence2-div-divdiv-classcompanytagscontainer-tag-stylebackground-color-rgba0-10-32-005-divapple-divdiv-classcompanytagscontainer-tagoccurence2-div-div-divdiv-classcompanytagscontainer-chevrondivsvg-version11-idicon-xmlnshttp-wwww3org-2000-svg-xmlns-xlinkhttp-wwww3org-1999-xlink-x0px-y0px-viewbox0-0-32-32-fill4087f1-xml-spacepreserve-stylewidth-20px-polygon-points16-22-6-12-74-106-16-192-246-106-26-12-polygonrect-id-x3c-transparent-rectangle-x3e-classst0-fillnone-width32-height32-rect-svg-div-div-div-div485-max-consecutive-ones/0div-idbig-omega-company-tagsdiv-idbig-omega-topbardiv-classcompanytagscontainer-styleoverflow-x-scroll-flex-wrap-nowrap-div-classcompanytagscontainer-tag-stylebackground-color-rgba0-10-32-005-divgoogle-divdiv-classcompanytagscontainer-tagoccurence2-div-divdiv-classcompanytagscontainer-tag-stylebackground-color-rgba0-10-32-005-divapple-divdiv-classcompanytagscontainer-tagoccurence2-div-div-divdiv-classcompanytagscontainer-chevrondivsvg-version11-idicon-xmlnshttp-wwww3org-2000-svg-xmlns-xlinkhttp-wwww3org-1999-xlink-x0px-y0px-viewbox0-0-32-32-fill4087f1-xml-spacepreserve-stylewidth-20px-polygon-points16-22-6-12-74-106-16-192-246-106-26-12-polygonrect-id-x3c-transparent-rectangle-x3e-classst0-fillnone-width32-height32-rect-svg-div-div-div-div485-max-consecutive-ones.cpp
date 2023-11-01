class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxi=0;
        int temp=0;
        for(int num:nums){
            if(num==1) temp++;
            else temp=0;
            
            maxi=max(temp,maxi);
        }
        return maxi;
        
    }
};