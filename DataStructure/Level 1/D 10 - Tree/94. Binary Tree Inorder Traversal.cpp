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
    vector<int> ans;
    
    void Inorder(TreeNode* node) {
        if(!node) return;
        
        if(node->left) Inorder(node->left);
        ans.push_back(node->val);
        if(node->right) Inorder(node->right);
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        Inorder(root);
        
        return ans;
    }
};