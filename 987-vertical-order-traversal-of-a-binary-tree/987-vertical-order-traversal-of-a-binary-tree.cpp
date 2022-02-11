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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
      vector<vector<int>>  ans;
        queue<pair<TreeNode*,int>> q;
        int lvl=-1;
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
        for(int i=0;i<=1000;i++){
            vector<int> subans;
            for(int j=0;j<=1000;j++)
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