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
/*
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
	int minCol=0, maxCol=0;
	votHelper(root, dataMap, 0, 0, minCol, maxCol);
	
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

*/
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>>  ans;
        queue<pair<TreeNode*,int>> q;
        int lvl=-1,minCol=INT_MAX,maxCol=INT_MIN,maxRow=INT_MIN;
        map<pair<int,int>,vector<int>> mp;
        q.push({nullptr,-1});
        q.push({root,(1000/2)});
        while(q.size()>1 or q.front().first!=nullptr){
            auto x = q.front();
            q.pop();
            auto rt = x.first;
            auto idx = x.second;
            
            if(rt==nullptr){
                lvl++;
                q.push({nullptr,-1});
                auto y = q.front();
                q.pop();
                rt = y.first;
                idx = y.second;
            }
            minCol = min(minCol,idx);
            maxCol = max(maxCol,idx);
            maxRow = max(maxRow,lvl);
            
            if(mp.find({idx,lvl})!=mp.end()){
                mp[{idx,lvl}].push_back(rt->val);
            }else{
                mp[{idx,lvl}]={rt->val};
            }
             if(rt->left)
                q.push({rt->left,idx-1});
        
            if(rt->right)
                q.push({rt->right,idx+1});
           
        }
        for(int i=minCol;i<=maxCol;i++){
            vector<int> subans;
            for(int j=0;j<=maxRow;j++)
                if(mp.find({i,j})!=mp.end()){
                    auto tmp = mp[{i,j}];
                    if(tmp.size()>1);
                        sort(tmp.begin(),tmp.end());
                    subans.insert(subans.end(), tmp.begin(), tmp.end());
                }
             if(subans.size())
                ans.push_back(subans);
        }
        return ans;
    }
};