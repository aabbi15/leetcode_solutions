class Solution {
    TreeNode* recur(int s, int e, vector<int>& nums) {
        if(s > e) return NULL;
        int mid = s + (e-s)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root -> left = recur(s, mid - 1, nums);
        root -> right = recur(mid + 1, e, nums);
        return root;
    }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return recur(0, nums.size() - 1, nums);
    }
};