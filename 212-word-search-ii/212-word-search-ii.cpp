class Solution {
    struct Trie{
        bool present=false;
        Trie *list[26]={nullptr};
    };
    vector<string> ans;
    
    Trie *root=new Trie();
    
    void insert(string s){
        Trie *tmp=root;
        
        for(auto &i:s){
            if(!tmp->list[i-'a'])
                tmp->list[i-'a'] = new Trie();
            tmp=tmp->list[i-'a'];
        }
        
        tmp->present=true;
    }
    
public:
    int m,n;
    int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};
    
    bool valid(int &x,int &y){
        return (x>=0 and y>=0 and x<m and y<n);
    }
    
    void dfs(int i,int j,Trie* root,string &word,vector<vector<char>>& board){   
        if(!valid(i,j) or board[i][j]=='#' or !root->list[board[i][j]-'a'])
            return;
        
        char tmp=board[i][j];
        word+=tmp;
        board[i][j]='#';

        for(int k=0;k<4;k++){
            int x=dx[k]+i,y=dy[k]+j;
                dfs(x,y,root->list[tmp-'a'],word,board);
        }
                      
        if(root->list[tmp-'a']->present){
            ans.push_back(word);
            root->list[tmp-'a']->present=false;
        }
        
        
        board[i][j]=tmp;
        word.pop_back();

    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        m=board.size(),n=board[0].size();
        
        for(auto &w:words)
            insert(w);
        
        string word;
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                dfs(i,j,root,word,board);
        
        return ans;
    }
};