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
        void Solve(vector<int>&res,TreeNode*root){
            // using recusion
            // base condtion
            if(root==NULL) return;
            Solve(res,root->left);
            res.push_back(root->val);
            Solve(res,root->right);
        }
public:
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>res;
        Solve(res,root);
        return res;
    }
};