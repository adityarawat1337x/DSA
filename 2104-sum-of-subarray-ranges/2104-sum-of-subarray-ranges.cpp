class Solution {
public:
        long long sumSubarrayMaxs(vector<int>& arr) {
        vector<vector<long long>> dp(arr.size()+1);
        stack<long long> st;
        vector<long long> l(arr.size()),r(arr.size());
        
        for(int i=0;i<arr.size();i++){
            while(!st.empty() and arr[st.top()]<arr[i])
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
            while(!st.empty() and arr[st.top()]<=arr[i])
                st.pop();
            if(!st.empty())
                r[i] = st.top();
            else
                r[i]=arr.size();
            st.push(i);
        }

        
        long long ans=0,mod = 1e9 + 7;
        
        for(int i=0;i<arr.size();i++){
            ans=ans + arr[i]*(i-l[i])*(r[i]-i);
        }
        
        return ans;
    }
    
    long long sumSubarrayMins(vector<int>& arr) {
        vector<vector<long long>> dp(arr.size()+1);
        stack<long long> st;
        vector<long long> l(arr.size()),r(arr.size());
        
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
            ans=ans + arr[i]*(i-l[i])*(r[i]-i);
        }
        
        return ans;
    }
    
    long long subArrayRanges(vector<int>& nums) {
        return sumSubarrayMaxs(nums)-sumSubarrayMins(nums);
    }
};