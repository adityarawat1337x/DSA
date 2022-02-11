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
   void votHelper(TreeNode* root, std::unordered_map<int, multiset<pair<int, int>>>& dataMap, int row, int col, int& minCol, int& maxCol)
{
	if(!root) return;
	dataMap[col].insert(make_pair(row, root->val));
	minCol = min(minCol, col);
	maxCol = max(maxCol, col);
	votHelper(root->left, dataMap, row+1, col-1, minCol, maxCol);
	votHelper(root->right, dataMap, row+1, col+1, minCol, maxCol);
}

vector<vector<int>> verticalTraversal(TreeNode* root)
{
	if(!root) return {{}};
	std::unordered_map<int, multiset<pair<int, int>>> dataMap;
	// Map for column numbers
	// multiset to store data in ordered fashion on the basis of <row, values>.

	int minCol=0, maxCol=0;
	votHelper(root, dataMap, 0, 0, minCol, maxCol);
	
	// for(auto itr : dataMap)
	// 	for(auto itr2 : itr.second)
	// 		std::cout << itr.first << " " << itr2.first << " " << itr2.second << std::endl;
	// std::cout << minCol << " " << maxCol;
	
	std::vector<vector<int>> votOrder;
	for(int i = minCol; i<=maxCol; i++)
    {
        std::vector<int> temp;
		for(auto itr : dataMap[i])
            temp.push_back(itr.second);
        votOrder.push_back(temp);
    }
	return votOrder;
}
};