//
//  Created by Patrick-Lin on 15/11/26.
//  Copyright © 2015年 Patrick-Lin. All rights reserved.
//

/*

 Invert a binary tree.
 
        4
       / \
      2   7
     / \ / \
    1  3 6  9
       
       to
 
        4
       / \
      7   2
     / \ / \
    9  6 3  1
 
 Trivia:
 This problem was inspired by this original tweet by Max Howell:
 Google: 90% of our engineers use the software you wrote (Homebrew), but you can’t invert a binary tree on a whiteboard so fuck off.

*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

// Solution 1 - recursive
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==nullptr)
            return root;
        
        TreeNode* temp=invertTree(root->left);
        root->left=invertTree(root->right);
        root->right=temp;
        
        return root;
    }
};

// Solution 2 - non-recursive
class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        vector<TreeNode*> vec;
        vec.push_back(root);
        
        while(!vec.empty()){
            TreeNode *node=vec.back();
            vec.pop_back();
            if(node==nullptr)
                continue;
            TreeNode *temp=node->left;
            node->left=node->right;
            node->right=temp;
            vec.push_back(node->left);
            vec.push_back(node->right);
        }
        return root;
    }
};




