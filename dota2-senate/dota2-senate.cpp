class Solution {
public:
    string predictPartyVictory(string s) {
        int D=0,R=0;
        for(int i=0;i<s.size();i++)
            if(s[i]=='R')
                R++;
            else D++;
        while(D && R){
            if(s[0]=='D'){
                for(int i=0;i<s.size();i++)
                    if(s[i]=='R'){
                        s.erase(s.begin()+i);
                        R--;
                        break;
                    }
            }
            else{
                for(int i=0;i<s.size();i++)
                    if(s[i]=='D'){
                        s.erase(s.begin()+i);
                        D--;
                        break;
                    }
            }
            s.push_back(s.front());
            s.erase(s.begin());
            }
        
        if(D>R)
            return "Dire";
        return "Radiant";
    }
};