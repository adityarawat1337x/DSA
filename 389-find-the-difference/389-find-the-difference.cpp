class Solution {
public:
    char findTheDifference(string s, string t) {
        char mask=0;
        for(auto i:s)
            mask=mask^i;
        
        for(auto i:t)
            mask=mask^i;
        return mask;
    }
};