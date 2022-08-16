class Solution {
public:
/*

set<string> ans;

void combi(string &ip,string make,int idx,int steps){
    if(steps>4)
        return;
    if(idx>=ip.size()){
        make.pop_back();
        if(steps==4)ans.insert(make);
        return;
    }

    if(ip[idx]=='0')
        return combi(ip,make+"0.",idx+1,steps+1);

    string str="";

    for(int i=idx;i<ip.size() and i<idx+3;i++){
        if(str!="" and stoi(str+ip[i]) > 255)
            return combi(ip,make+str+'.',i,steps+1);
        else{
            str+=ip[i];
            combi(ip,make+str+'.',i+1,steps+1);
        }
    }
}


    
vector<string> restoreIpAddresses(string ip) {
    
    
    ans.clear();
    vector<string> res;
    combi(ip,"",0,0);
    for(auto &it:ans)
        res.push_back(it);
    return res;
}
    */
vector<string> restoreIpAddresses(string s) {
    vector<string> ret;
    string ans;

    for (int a=1; a<=3; a++)
    for (int b=1; b<=3; b++)
    for (int c=1; c<=3; c++)
    for (int d=1; d<=3; d++)
        if (a+b+c+d == s.length()) {
            int A = stoi(s.substr(0, a));
            int B = stoi(s.substr(a, b));
            int C = stoi(s.substr(a+b, c));
            int D = stoi(s.substr(a+b+c, d));
            if (A<=255 && B<=255 && C<=255 && D<=255)
                if ( (ans=to_string(A)+"."+to_string(B)+"."+to_string(C)+"."+to_string(D)).length() == s.length()+3)
                    ret.push_back(ans);
        }    

    return ret;
}
};