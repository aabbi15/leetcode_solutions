/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isleaf(TreeNode* node){
        if(!node->left && !node->right){
            return true;
        }
        return false;
    }
    
    TreeNode* findmin(TreeNode* root) {
    TreeNode* min = root;
    if (root == nullptr) {
        return root;
    }
    while (min->left) {
        min = min->left;
    }
    return min;
}

    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr){
            return nullptr;
        }
         if( key<root->val){
            
            root->left=deleteNode(root->left,key);}
        
        if( key>root->val){
            root->right = deleteNode(root->right,key);
        }
        
        if(root->val==key){
            if(isleaf(root)){
                delete root;
                return nullptr;
            }
            if(root->left==nullptr){
                return root->right;
                
            }
            if(root->right==nullptr){
                return root->left;
            }
            
            TreeNode* succ=findmin(root->right);
            root->val=succ->val;
            root->right= deleteNode(root->right,succ->val);
            
            
            
        }
        
       
        return root;
        
        
    }
};