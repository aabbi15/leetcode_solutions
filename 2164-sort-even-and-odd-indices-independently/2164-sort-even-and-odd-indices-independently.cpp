class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
       int n = nums.size();
        // sort even elements in ascending order
        for(int i = 0; i < n; i += 2){
            for(int j = i + 2; j < n; j += 2){
                if(nums[j] < nums[i]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        // sort odd elements in descending order
        for(int i = 1; i < n; i += 2){
            for(int j = i + 2; j < n; j += 2){
                if(nums[j] > nums[i]){
                    swap(nums[i], nums[j]);
                }
            }
        }
        return nums;

        
    }
};