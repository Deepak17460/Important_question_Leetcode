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
void count_good(TreeNode *root,int &count,int curr_max)
{
    if(root==NULL)
        return ;
    if(root->val>=curr_max)
    {
        count++;
        curr_max=root->val;
    }
    count_good(root->left,count,curr_max);
    count_good(root->right,count,curr_max);
}
int goodNodes(TreeNode* root) 
{
    if(root==NULL)
        return 0;
    int count=0;
    count_good(root,count,root->val);
    return count;
  }
};