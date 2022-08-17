class Solution {
public:
    string morse[26]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    int uniqueMorseRepresentations(vector<string>& words) {

        unordered_set<string> st;
        
        for(auto &w:words){
            string trans="";
            for(auto &c:w)
                trans+=morse[c-'a'];
            st.insert(trans);
        }
        
        return st.size();
    }
};