class Solution {
public:

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
};