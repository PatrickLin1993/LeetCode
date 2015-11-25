//
//  Created by Patrick-Lin on 15/11/25.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//

/*
 
 Given a binary tree, find its maximum depth.
 
 The maximum depth is the number of nodes along the longest path from the root node down to the farthest 
 leaf node.
 
 */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 **/

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == nullptr)
            return 0;
        if(!root->left && !root->right)
            return 1;
        int left=1,right=1;
        if(root->left)
            left+=maxDepth(root->left);
        if(root->right)
            right+=maxDepth(root->right);
        return left>=right?left:right;
    }
};