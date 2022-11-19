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
    vector<vector<int>> levelOrder(TreeNode* root) {
       vector<vector<int> >res;
        if (root==NULL) return res;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        vector<int>cur_vec;
        while(!q.empty()) {
            TreeNode* Curr_Node = q.front();
            q.pop();
            if (Curr_Node==NULL) {
                res.push_back(cur_vec);
                cur_vec.resize(0);
                if (q.size() > 0) {
                    q.push(NULL);
                }
            } else {
                cur_vec.push_back(Curr_Node->val);
                if (Curr_Node->left!=NULL) q.push(Curr_Node->left);
                if (Curr_Node->right!=NULL) q.push(Curr_Node->right);
            }
        }
        return res;
    }
};