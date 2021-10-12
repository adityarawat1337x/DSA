class MyQueue {
public:
    vector<int> a,b;
    MyQueue() {
        
    }
    
    void push(int x) {
        while(a.size()){
            b.push_back(a.back());
            a.pop_back();
        }
        a.push_back(x);
        while(b.size()){
            a.push_back(b.back());
            b.pop_back();
        }
        
    }
    
    int pop() {
        int x = a.back();
        a.pop_back();
        return x;
    }
    
    int peek() {
        return a.back();
    }
    
    bool empty() {
        return a.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */