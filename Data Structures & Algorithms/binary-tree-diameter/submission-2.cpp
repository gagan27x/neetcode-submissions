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
    int ans =0;
    int height(TreeNode* root){
        if(root==NULL) return 0;

        int l_hight = height(root->left);
        int r_hight = height(root->right);

        ans = max(ans,l_hight + r_hight);

        return max(l_hight,r_hight) +1;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};
