class Solution {
public:
    int fr(string v,int l,int r){
        while(l<r and v[l]=='0')
            l++;
        return l;
    }
    int er(string v,int l,int r){
       
        return r;
    }
    void normalize(string &a,string &b){
        if(a.size()==b.size())
            return;
        else if(a.size()<b.size())
            normalize(b,a);
        else
            while(a.size()!=b.size()){
                b.push_back('0');
            }
    }
    int compareVersion(string v1, string v2) {
        
        int i1=0,j1=0,i2=0,j2=0;
         while(j1<v1.size() and j2<v2.size()){
             while(j1<v1.size() and v1[j1]!='.')
                 j1++;
             while(j2<v2.size() and v2[j2]!='.')
                 j2++;
          
             int sj1 = fr(v1,i1,j1-1);
             int ej1 = er(v1,sj1,j1-1);
             int sj2 = fr(v2,i2,j2-1);
             int ej2 = er(v2,sj2,j2-1);
             
             string a = v1.substr(sj1,ej1-sj1+1);
             string b = v2.substr(sj2,ej2-sj2+1);
             //normalize(a,b);
             //cout<<i1<<" "<<j1<<" "<<a<<" | "<<i2<<" "<<j2<<" "<<b<<"\n";
             
             if(stoi(a)<stoi(b)){
                 return -1;
             }
             if(stoi(b)<stoi(a)){
                 return 1;
             }
             i1=++j1;
             i2=++j2;
         }
        
        while(j1<v1.size()){
            if(v1[j1]!='0' and v1[j1]!='.')
                return 1;
            j1++;
        }
        
        while(j2<v2.size()){
            if(v2[j2]!='0' and v2[j2]!='.'){
              //  cout<<"yay"<<v2[j2];
                return -1;                
            }
            
            j2++;
        }
        
        return 0;
    }
};