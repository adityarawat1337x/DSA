class Solution {
public:
    int missingNumber(vector<int>& arr) {
         int Xor=0;
        for(auto i:arr)
            Xor=Xor^i;
        for(int i=0;i<=arr.size();i++)
            Xor=Xor^i;

        int rsb = Xor&-Xor;

        int bucket1=Xor,bucket2=Xor;
        for(int i=1;i<=arr.size();i++){
            if(rsb&i){
                bucket1=bucket1^i;
            }else
            {
                bucket2=bucket2^i;
            }
        }

        for(auto i:arr){
            if(rsb&i){
                bucket1=bucket1^i;
            }else
            {
                bucket2=bucket2^i;
            }
        }
        for(auto i:arr){
            if(i==bucket1){
                swap(bucket1,bucket2);
                break;
            }
        }
        return bucket1;
    }
};