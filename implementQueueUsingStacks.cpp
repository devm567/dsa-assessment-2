class MyQueue {
public:
    stack<int>st;
    stack<int>helper;
    MyQueue() {
        
    }
    
    void push(int x) {
        if(st.size()==0){
            st.push(x);
            return;
        }
        while(st.size()>0){
            helper.push(st.top());
            st.pop();
        }
        st.push(x);
        while(helper.size()>0){
            st.push(helper.top());
            helper.pop();
        }
    }
    
    int pop() {
        int x = st.top();
        st.pop();
        return x;
    }
    
    int peek() {
        return st.top();
    }
    
    bool empty() {
        if(!st.size()) return true;
        else return false;
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
