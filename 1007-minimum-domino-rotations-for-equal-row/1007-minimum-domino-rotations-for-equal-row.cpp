class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int upt=0,downt=0,upb=0,downb=0,up=0,down=0;
        for(int i=0;i<tops.size();i++){
            if(tops[i]!=tops[0])
                upt++;
            if(bottoms[i]!=tops[0])
                upb++;
            if(tops[i]!=bottoms[0])
                downt++;
            if(bottoms[i]!=bottoms[0])
                downb++;
            if(tops[i]==tops[0] or bottoms[i]==tops[0])
                up++;
            if(tops[i]==bottoms[0] or bottoms[i]==bottoms[0])
                down++;
        }
        
        if(up == down and down==tops.size()){
              return min(min(downt,downb), min(upt,upb));
        }else if(up == tops.size()){
            return min(upt,upb);
        }else if(down == tops.size()){
            return min(downt,downb);
        }else
            return -1;
    }
};