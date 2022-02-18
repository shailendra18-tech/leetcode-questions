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

int depth(TreeNode* r){
    if(r==NULL){
        return INT_MAX;
    }
    if(r->left==NULL && r->right==NULL){
        return 1;
    }
    int left_ht=depth(r->left);
    int right_ht=depth(r->right);
    return 1+min(left_ht, right_ht);
}
class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        return depth(root);
    }
};