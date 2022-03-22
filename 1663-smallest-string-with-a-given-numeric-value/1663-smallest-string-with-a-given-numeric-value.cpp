class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";
        char c;
        int val;
        while(n--){
            c='z';
            while(c>='a'){
                val = c-'a'+1;
                if(k-val>n){
                    break;
                }
                c--;
            }
            c++;
            if(c>'z')
                c='z';
            else if(c<'a')
                c='a';
            k-=((c-'a')+1);
            s.push_back(c);
        }
        
        reverse(s.begin(),s.end());
        return s;
    }
};