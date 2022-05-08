/**
 * class NestedInteger {
 *   public:
 *     bool isInteger() const;
 *     int getInteger() const;
 *     const vector<NestedInteger> &getList() const;
 * };
 */
 vector<int> ans;
 int i=0;



class NestedIterator {
public:
    
 void itr(vector<NestedInteger> &nL){
    for(int d=0;d<nL.size();d++){
        if(nL[d].isInteger()){
            ans.push_back(nL[d].getInteger());
        }else{
            itr(nL[d].getList());
        }
    }
}
    NestedIterator(vector<NestedInteger> &nestedList) {
        itr(nestedList);
    }
    
    int next() {
        return ans[i++];
    }
    
    bool hasNext() {
        return i<ans.size();
    }
};

/**
 * Your NestedIterator object will be instantiated and called as such:
 * NestedIterator i(nestedList);
 * while (i.hasNext()) cout << i.next();
 */