#include<bits/stdc++.h>
#include<vector>

using namespace std;

    int hammingWeight(uint32_t n) {
        int ctr=0;
        while(n>0){
            ctr+=(n%10==1)?1:0;
            n/=10;
        }
    return ctr;
    }

int main(){
    uint32_t x=00000000000000000000000000001011     ; 
    cout<<hammingWeight(x);
    return 0;
}