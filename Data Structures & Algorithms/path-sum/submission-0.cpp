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
private:
   bool dfs(TreeNode* root, int targetSum, int curSum){
          if(root==nullptr)return false;

          curSum+=root->val;

          if(root->left==nullptr && root->right==nullptr){
            return curSum==targetSum;
          }

         return dfs(root->right, targetSum, curSum) || dfs(root->left, targetSum, curSum);

   }
public:

    bool hasPathSum(TreeNode* root, int targetSum) {
        return dfs(root,targetSum,0);
    }
};