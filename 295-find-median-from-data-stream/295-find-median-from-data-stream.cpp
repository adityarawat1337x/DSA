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
        if (size == 0) {
            minHeap.push(num);
        } else {
            if (minHeap.top() > num) {
                maxHeap.push(num);
            } else {
                minHeap.push(num);
            }
        }

        int minHeap_size = minHeap.size();
        int maxHeap_size = maxHeap.size();
        int sizeDiff = abs(minHeap_size - maxHeap_size);
        if (sizeDiff > 1) {
            // move one element from larger to smaller
            if (minHeap.size() > maxHeap.size()) {
                maxHeap.push(minHeap.top());
                minHeap.pop();
            } else {
                minHeap.push(maxHeap.top());
                maxHeap.pop();
            }
        }
        size++;
    }

    // O(1)
    double findMedian() {
        if (size % 2 == 0) {
            return (minHeap.top() + maxHeap.top()) / 2.0;
        } 

        return minHeap.size() > maxHeap.size()? 
                minHeap.top() : maxHeap.top();
    }

 private:
    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int size;
};