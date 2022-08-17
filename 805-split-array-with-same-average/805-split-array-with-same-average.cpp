class Solution {
public:
    vector<vector<vector<bool>>>dp;
    bool possible(vector<int> &A, int index, int count, int sum){
        if(sum == 0 && count == 0)  return true;
        if(sum < 0 || index >= A.size() || count == 0)    return false;
        if(dp[index][count][sum] == false)  return false;
        if(possible(A, index + 1, count - 1, sum - A[index]))   return dp[index][count][sum] = true;
        if(possible(A, index + 1, count, sum))  return dp[index][count][sum] = true;
        return dp[index][count][sum] = false;
    }
    bool splitArraySameAverage(vector<int>& A) {
        int n = A.size();
        int sum = 0;
        sum = accumulate(A.begin(), A.end(), sum);
        dp.resize(n, vector<vector<bool>>(n/2 + 1, vector<bool>(sum + 1, true)));
        for(int k = 1; k <= n / 2; k++){
            if(((sum * k) % n) == 0 && possible(A, 0, k, sum * k / n))  return true;
        }
        return false;
    }
};