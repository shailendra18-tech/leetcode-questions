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

void treepaths(TreeNode* root, vector<string>& ans, string str){
    if(root==NULL){
        return;
    }
    str+=to_string(root->val);
    if(root->left==NULL && root->right==NULL){
        ans.push_back(str);
    }
    else{
        treepaths(root->left, ans, str+"->");
        treepaths(root->right, ans, str+"->");
    }
    str.pop_back();
    str.pop_back();
}
class Solution {
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        string str="";
        if(root==NULL){
            return {""};
        }
        if(root->left==NULL && root->right==NULL){
            return {to_string(root->val)};
        }
        treepaths(root, ans, str);
        return ans;
    }
};