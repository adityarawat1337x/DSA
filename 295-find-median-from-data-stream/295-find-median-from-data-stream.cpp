class MedianFinder {
 public: 
    MedianFinder() {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        size = 0;
    }
    ~MedianFinder() = default;

    // O(lg n)
    // maintain the invariant:
    // abs(minHeap.size() - maxHeap.size()) <= 1
    void addNum(int num) {
        maxHeap.push(num);
        int tmp  = maxHeap.top();
        maxHeap.pop();
        minHeap.push(tmp);
        if(maxHeap.size()+1<minHeap.size()){
            int tmp  = minHeap.top();
            minHeap.pop();
            maxHeap.push(tmp);
        }
        
    }

    // O(1)
    double findMedian() {
        if(maxHeap.size()>minHeap.size()){
            return maxHeap.top();
        }else if(maxHeap.size()<minHeap.size()){
            return minHeap.top();
        }
        return ((double)minHeap.top()+(double)maxHeap.top())/2.0;
    }

 private:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int size;
};