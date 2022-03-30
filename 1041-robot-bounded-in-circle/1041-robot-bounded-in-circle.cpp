class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,dir[4]={0,0,0,1};
        // right down left up
        for(int run=0;run<4;run++){
            for(auto i:instructions){
                if(i=='G'){
                    if(dir[3]){
                        y++;
                    }else if(dir[1]){
                        y--;
                    }else if(dir[2]){
                        x--;
                    }else{
                        x++;
                    }
                }else{
                    int k=0;

                    while(k<4){
                        if(dir[k]==1)
                            break;
                        k++;
                    }

                    if(i=='L'){
                       dir[k]=0;
                       dir[(k+4-1)%4]=1;
                    }else{
                       dir[k]=0;
                       dir[(k+1)%4]=1;
                    }
                }
            }
        }
        
        return x==0 and y==0;
    }
};