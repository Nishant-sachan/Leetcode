/**
 * Definition for a binary tree root.
 * struct Treeroot {
 *     int val;
 *     Treeroot *left;
 *     Treeroot *right;
 *     Treeroot() : val(0), left(nullptr), right(nullptr) {}
 *     Treeroot(int x) : val(x), left(nullptr), right(nullptr) {}
 *     Treeroot(int x, Treeroot *left, Treeroot *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (!root) {
			TreeNode *newNode = new TreeNode(val);
			return newNode;
		}
		if (val < root->val) {
			root->left = insertIntoBST(root->left, val);
		}
		else {
			root->right = insertIntoBST(root->right, val);
		}
		return root;
    }
};