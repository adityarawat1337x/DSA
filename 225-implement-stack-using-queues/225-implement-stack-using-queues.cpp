class MyStack {
    queue<int> st,tmp;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        while(!st.empty()){
            tmp.push(st.front());
            st.pop();
        }
        st.push(x);
    }
    
    int pop() {
        int x = st.front();
        st.pop();
        while(tmp.size()>1){
            st.push(tmp.front());
            tmp.pop();
        }
        swap(st,tmp);
        return x;
    }
    
    int top() {
        return st.front();
    }
    
    bool empty() {
        return st.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */