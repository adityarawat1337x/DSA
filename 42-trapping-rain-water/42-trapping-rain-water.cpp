class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> rightMax;
        int cost=0,rm=INT_MIN,leftMax=height[0];
        
        for(int i=height.size()-1;i>-1;i--){
            rm = max(rm,height[i]);
            rightMax.push_back(rm);
        }
        reverse(rightMax.begin(),rightMax.end());
        for(int i=1;i<height.size()-1;i++){
            leftMax=max(leftMax,height[i]);
            cost+=min(leftMax,rightMax[i])-height[i];
        }
        
        return cost;
    }
};