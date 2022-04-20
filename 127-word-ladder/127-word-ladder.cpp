class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        queue<string> q;
        q.push(beginWord);
        int lvl=1;
        unordered_set<string> st(wordList.begin(),wordList.end());
        while(!q.empty()){
            int n=q.size();
            for(int l=0;l<n;l++){
                auto word = q.front();
                q.pop();
                if(word==endWord)
                    return lvl;
                st.erase(word);
                for (int j = 0; j < word.size(); j++) {
                    char c = word[j];
                    for (int k = 0; k < 26; k++) {
                        word[j] = 'a' + k;
                        if(st.find(word) != st.end()) {
                            q.push(word);
                        }
                    }
                    word[j] = c;
                }
            }
            lvl++;
        }
        
        return 0;
    }
};