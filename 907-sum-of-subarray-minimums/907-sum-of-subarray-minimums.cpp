class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        vector<vector<int>> dp(arr.size()+1);
        stack<int> st;
        vector<int> l(arr.size()),r(arr.size());
        
        for(int i=0;i<arr.size();i++){
            while(!st.empty() and arr[st.top()]>=arr[i])
                st.pop();
            if(!st.empty())
                l[i] = st.top();
            else
                l[i]=-1;
            st.push(i);
        }

        while(!st.empty())
            st.pop();
        
        for(int i=arr.size()-1;i>-1;i--){
            while(!st.empty() and arr[st.top()]>arr[i])
                st.pop();
            if(!st.empty())
                r[i] = st.top();
            else
                r[i]=arr.size();
            st.push(i);
        }

        
        long long ans=0,mod = 1e9 + 7;
        
        for(int i=0;i<arr.size();i++){
            ans=(ans%mod + (arr[i]%mod*((i-l[i])%mod*(r[i]-i)%mod)%mod)%mod)%mod;
        }
        
        return ans;
    }
};