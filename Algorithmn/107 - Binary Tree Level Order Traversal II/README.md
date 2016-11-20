##Binary Tree Level Order Traversal II

Given a binary tree, find its maximum depth.

The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.

##Solution

使用队列实现中序遍历：

```cpp
vector<vector<int>> levelOrderBottom(TreeNode* root) {
	vector<vector<int>> res;
	if (root == nullptr)
		return res;

	queue<TreeNode*> que;
	que.push(root);
	vector<int> elm(1, root->val);
	res.push_back(elm);
	while (!que.empty()){
		int sizeCurLevel = que.size();
		vector<int> elm;
		while (sizeCurLevel--){
			auto node = que.front();
			que.pop();
			if (node->left){
				que.push(node->left);
				elm.push_back(node->left->val);
			}
			if (node->right){
				que.push(node->right);
				elm.push_back(node->right->val);
			}
		}
		if (!elm.empty())
			res.insert(res.begin(), elm);
	}
	return res;
}
```