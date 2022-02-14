class MedianFinder {
    priority_queue<int> left;
    priority_queue<int,vector<int>,greater<int>> right;
public:
    MedianFinder() {
        
    }
    
    void addNum(int num) {
        left.push(num);
        auto x = left.top();
        left.pop();
        right.push(x);
        if(left.size()<right.size()){
            auto x = right.top();
            right.pop();
            left.push(x);
        }
    }
    
    double findMedian() {
        if(left.size()==right.size())
            return (double)(left.top()+right.top())/2.0;
        return left.top();
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */