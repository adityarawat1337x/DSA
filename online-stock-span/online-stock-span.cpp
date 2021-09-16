class StockSpanner {
public:
    stack<pair<int,int>> s;
    vector<int> v;
    int i;
    StockSpanner() {
        i=-1;
    }
    
    int next(int price) {
        if(!s.size()){
            v.push_back(-1);
        }else{
            while(s.size()>0 && s.top().first<=price){
                s.pop();
            }
            if(!s.size()){
               v.push_back(-1);
            }
            else{
               v.push_back(s.top().second);
            }
        }
        s.push({price,++i});
        return i-v.back();
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */