class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;

        queue<TreeNode*> qleft, qright;
        qleft.push(root->left);
        qright.push(root->right);

        while (!qleft.empty() && !qright.empty()) {
            TreeNode* templeft = qleft.front();
            TreeNode* tempright = qright.front();
            qleft.pop();
            qright.pop();

            if (!templeft && !tempright)
                continue;
            if ((templeft && !tempright) || (!templeft && tempright))
                return false;
            if (templeft->val != tempright->val)
                return false;

            qleft.push(templeft->left);
            qright.push(tempright->right);

            qleft.push(templeft->right);
            qright.push(tempright->left);
        }

        return true;
    }
};
