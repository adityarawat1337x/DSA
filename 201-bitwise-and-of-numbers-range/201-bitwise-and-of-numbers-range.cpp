class Solution {
public:
    int PositionRightmostSetbit(int n)
{
      if(n == 0)
          return 0;
    int position = 0;
    int m = 1;
 
    while (!(n & m)) {
        m = m << 1;
        position++;
    }
    return (1<<position);
}
int rangeBitwiseAnd(int left, int right) {
        int ans=INT_MAX;
        int near = PositionRightmostSetbit(right);
        if(left<near){
            return 0;
        }
        near = max(near,left);
        while(near<right){
            ans&=near;
            if(ans==0)
                return ans;
            near++;
        }
        return ans&right;
    }
};