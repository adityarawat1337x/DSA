class Solution {
public:
    int chalkReplacer(vector<int>& chalk,unsigned long long k) {
      
        unsigned long long int sum=accumulate(chalk.begin(),chalk.end(),0LL);
        if(k>sum){
            k=k%sum;
        }
        for(int i=0;i<chalk.size();i++){
            if(chalk[i]>k)
                return i;
            k-=chalk[i];
        }
        return 0;
    }
};