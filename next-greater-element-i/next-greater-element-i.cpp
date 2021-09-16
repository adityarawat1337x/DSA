class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st; 
    vector<int> v;
    for(int i = nums2.size()-1; i>=0; i--){    
        int val = nums2[i];
         while(st.size() && val>st.top()){              // 1 3 4 2
             st.pop();                                  // 4  1 2
         }

        if(st.empty())
            v.push_back(-1); 
        else v.push_back(st.top());
        st.push(val);
    }
        
    reverse(v.begin(),v.end());
    unordered_map<int,int> m;
    for(int i =0; i<nums2.size(); i++)
       m[nums2[i]] = v[i];
   
        
   vector<int> ans;
        
   for(int i =0; i<nums1.size(); i++)
       ans.push_back(m[nums1[i]]);
   
    return ans;
    }
};