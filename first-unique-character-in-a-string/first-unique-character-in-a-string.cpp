class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>sMap{};
        for(auto chr:s)sMap[chr]=sMap[chr]+1;
        int index=-1;
        char letter;
        for(auto it:sMap){
            if(it.second==1){letter=it.first;}
        }
        if(s.find(letter)!=string::npos){
            index=s.find(letter);
        }
        return index;
    }
};