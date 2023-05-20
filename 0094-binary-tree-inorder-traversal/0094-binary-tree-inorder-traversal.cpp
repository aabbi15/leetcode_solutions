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
    
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode *temp=root;
        stack<TreeNode*> st;
        vector<int> ans;
        while(true){
            if(temp!=NULL){
                st.push(temp);
                temp=temp->left;
                
            }
            else if(temp==NULL){
                if(st.empty()==true) {break;}
                temp= st.top();
                st.pop();
               
                
                ans.push_back(temp->val);
                
                temp=temp->right;
                //st.push(temp);
                
                
                
                
            }
        }
        return ans;
        
    }
};