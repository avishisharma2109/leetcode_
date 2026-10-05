// Last updated: 10/6/2026, 12:02:57 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13public:
14    void postorder(TreeNode* root,vector<int> &ans){
15        if(root==NULL){
16            return;
17        }
18        postorder(root->left,ans);
19        postorder(root->right,ans);
20        ans.push_back(root->val);
21
22    }
23    vector<int> postorderTraversal(TreeNode* root) {
24        vector<int> ans;
25        postorder(root,ans);
26        return ans;
27    }
28};