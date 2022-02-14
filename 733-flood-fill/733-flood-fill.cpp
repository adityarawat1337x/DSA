class Solution {
    int dir[4][2] = {{-1,0},{1,0},{0,1},{0,-1}};
    int color;
public:
    bool valid(vector<vector<int>>& image, int sr, int sc, int x,int y){
        if(x<0 or y<0 or x>=image.size() or y>=image[0].size() or color!=image[x][y])
            return false;
        return true;
    }
    
    void help(vector<vector<int>>& image, int sr, int sc, int newColor){
        image[sr][sc]=newColor;
         for(int i=0;i<4;i++){
            int x = sr+dir[i][0];
            int y = sc+dir[i][1];
            if(valid(image,sr,sc,x,y))
                floodFill(image,x,y,newColor);
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        color = image[sr][sc];
        if(newColor==color)
            return image;
        help(image,sr,sc,newColor);
        return image;
    }
};