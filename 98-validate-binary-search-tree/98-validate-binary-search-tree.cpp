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
    int min=INT_MIN, max=INT_MAX;
    int check(TreeNode* root, TreeNode* minNode,TreeNode* maxNode)
    {
        if(root==NULL) return true;
       if(minNode && root->val <= minNode->val || maxNode && root->val >= maxNode->val)
        return false;
        return check(root->left, minNode, root) && check(root->right, root, maxNode);
    }
    bool isValidBST(TreeNode* root) {
       return check(root, NULL, NULL);
    }
};