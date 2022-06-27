class Solution {
public:
    int minPartitions(string n) {
        short ans=0;
        int i=0;
        while(i<n.size() and ans!=9){
            if(ans<n[i]-48)
                ans = n[i]-48;
            i++;
        }
        return ans;
    }
};