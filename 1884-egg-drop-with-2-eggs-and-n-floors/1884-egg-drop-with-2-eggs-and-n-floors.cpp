class Solution {
public:
    int twoEggDrop(int n) {
        return (int)ceil((-1.+sqrt(1+8*n))/2.);
    }
};