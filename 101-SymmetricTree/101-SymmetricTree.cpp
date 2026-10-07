// Last updated: 10/8/2026, 1:00:36 AM
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
    bool checkif(TreeNode* r1,TreeNode* r2){
        if(!r1 && !r2) return true;//sirf root present h
        if(!r1 && r2) return false;//r2 ke hi bache h
        if(r1 && !r2) return false;//r1 ke hi bache h

        if(r1->val != r2->val)return false;

        return checkif(r1->right,r2->left) && checkif(r2->right,r1->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;

        return checkif(root->left,root->right);
    }
};