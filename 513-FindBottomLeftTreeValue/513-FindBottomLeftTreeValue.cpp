// Last updated: 10/10/2026, 2:16:35 AM
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
14    int findBottomLeftValue(TreeNode* root) {
15        queue<TreeNode*> q;
16        q.push(root);
17        int ans=root-> val;
18        int n=q.size();
19
20        while(!q.empty()){
21            for(int i=0;i<n;i++){
22                TreeNode* node=q.front();
23                q.pop();
24
25                if(i==0){
26                    ans=node->val;
27                }
28                if(node->right !=NULL){
29                q.push(node->right);
30                }
31                if(node->left !=NULL){
32                q.push(node->left);
33                }
34            }
35            
36
37        }
38        return ans;
39    }
40};