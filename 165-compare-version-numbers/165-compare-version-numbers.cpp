class Solution {
public:
    int fr(string v,int l,int r){
        while(l<r and v[l]=='0')
            l++;
        return l;
    }

    int compareVersion(string v1, string v2) {
        
        int i1=0,j1=0,i2=0,j2=0;
         while(j1<v1.size() and j2<v2.size()){
             while(j1<v1.size() and v1[j1]!='.')
                 j1++;
             while(j2<v2.size() and v2[j2]!='.')
                 j2++;
          
             int sj1 = fr(v1,i1,j1-1);
             int sj2 = fr(v2,i2,j2-1);
             
             int a = stoi(v1.substr(sj1,j1-sj1));
             int b = stoi(v2.substr(sj2,j2-sj2));
             
             if(a<b)
                 return -1;
             if(b<a)
                 return 1;
             
             i1=++j1;
             i2=++j2;
         }
        
        while(j1<v1.size()){
            if(v1[j1]!='0' and v1[j1]!='.')
                return 1;
            j1++;
        }
        
        while(j2<v2.size()){
            if(v2[j2]!='0' and v2[j2]!='.')
                return -1;                
            j2++;
        }
        
        return 0;
    }
};