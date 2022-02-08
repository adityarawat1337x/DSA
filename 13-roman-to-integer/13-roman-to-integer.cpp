class Solution {
     int pos[7]={'I','V','X','L','C','D','M'};
public:
    bool bigger(char a,char b){
        if(a==b)
            return true;
        for(int i=0;i<7;i++){
            if(pos[i]==a)
                return false;
             if(pos[i]==b)
                 return true;
        }
        return false;
    }
    
    int romanToInt(string s) {
       
        int mp[26]={0,0,100,500,0,0,0,0,1,0,0,50,1000,0,0,0,0,0,0,0,0,5,0,10,0,0};
        int ans=0;
        char prev='I';
        for(int i=s.size()-1;i>-1;i--){
            if(bigger(s[i],prev)){
                ans+=mp[s[i]-'A'];
            }else{
                ans-=mp[s[i]-'A'];
            }
            prev = s[i];
        }
        
        return ans;
    }
};