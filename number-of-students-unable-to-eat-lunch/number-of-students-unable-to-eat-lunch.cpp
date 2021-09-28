class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sd) {
        int ctr=0;
        for(int i=0;i<sd.size();){
            if(ctr==st.size()){
                break;
            }
            if(sd[i]==st.front()){
                i++;
                ctr=0;
            }else{
                st.push_back(st.front());
                ctr++;
            }
            st.erase(st.begin());
            cout<<st[0];
        }
        return st.size();
    }
};