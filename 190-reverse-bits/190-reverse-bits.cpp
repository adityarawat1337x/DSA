class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t l=1<<31,r=1;

        while(l>r){
            uint32_t lbit= n&l;
            uint32_t rbit= n&r;

            if(lbit)
                n|=(r);
            else
                n&=(~r);

            if(rbit)
                n|=(l);
            else
                n&=(~l);

            l=l>>1;
            r=r<<1;
        }
        return n;
    }
};