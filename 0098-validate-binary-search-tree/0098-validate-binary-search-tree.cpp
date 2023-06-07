class Solution {
public:
    bool isValidBST(TreeNode* root) {
        return isValidBSTHelper(root, nullptr, nullptr);
    }
    
private:
    bool isValidBSTHelper(TreeNode* node, TreeNode* minNode, TreeNode* maxNode) {
        if (node == nullptr) {
            return true;
        }
        
        if ((minNode && node->val <= minNode->val) || (maxNode && node->val >= maxNode->val)) {
            return false;
        }
        
        return isValidBSTHelper(node->left, minNode, node) && isValidBSTHelper(node->right, node, maxNode);
    }
};
