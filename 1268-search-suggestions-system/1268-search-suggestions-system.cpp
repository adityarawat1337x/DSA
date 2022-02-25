class Solution {
public:
    int bs(int l,vector<string>& products, string pre){
        int r=products.size()-1,ans=0;
        while(l<=r){
            int m = l+(r-l)/2;
            if(products[m].size()>=pre.size() and products[m].substr(0,pre.size())==pre){
                ans=m;
                r=m-1;
            }else if(products[m].size()>=pre.size() and products[m].substr(0,pre.size())>pre)
                r=m-1;
            else
                l=m+1;
        }
        
        return ans;
    }
    
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        vector<vector<string>> ans;
        
        string pre="";
        int start=0;
        for(auto k:searchWord){
            pre+=k;
            //int x = bs(start,products,pre);
            int x = lower_bound(products.begin() + start, products.end(), pre) - products.begin();
            start=x;
            vector<string> tmp;
            for(int i=0;i<3;i++){
                if(x<products.size() and products[x].substr(0,pre.size())==pre){
                    tmp.push_back(products[x]);
                }
                x++;
            }
            ans.push_back(tmp);
        }
        
        return ans;
    }
};