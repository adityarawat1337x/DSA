class MedianFinder {
 public: 
    MedianFinder() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    }
    ~MedianFinder() = default;
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
    
    void addNum(int num) {
        left.push(num);
        right.push(left.top());
        left.pop();
        if(left.size()<right.size()){
            left.push(right.top());
            right.pop(); 
        }
    }
    
    double findMedian() {
return left.size()>right.size()?
        left.top():
        (left.top()+right.top())/2.0;
 
    }
};