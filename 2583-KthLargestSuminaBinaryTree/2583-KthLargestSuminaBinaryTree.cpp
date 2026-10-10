// Last updated: 10/10/2026, 11:22:59 PM
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
12
13class Solution {
14public:
15    long long kthLargestLevelSum(TreeNode* root, int k) {
16        queue<TreeNode*> q;
17        q.push(root);
18
19        vector<long long> sums;
20
21        while (!q.empty()) {
22            int n = q.size();
23            long long sum = 0;
24
25            for (int i = 0; i < n; i++) {
26                TreeNode* node = q.front();
27                q.pop();
28
29                sum += node->val;
30
31                if (node->left)
32                    q.push(node->left);
33
34                if (node->right)
35                    q.push(node->right);
36            }
37
38            sums.push_back(sum);
39        }
40
41        if (sums.size() < k)
42            return -1;
43
44        sort(sums.begin(), sums.end(), greater<long long>());
45
46        return sums[k - 1];
47    }
48};
49