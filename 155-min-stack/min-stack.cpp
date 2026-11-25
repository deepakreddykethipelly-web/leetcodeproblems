class MinStack {
private:
stack<int> st;
stack<int> minST;
public:
    MinStack() {
    }
    
    void push(int value) {
        st.push(value);
        if(minST.empty()){
            minST.push(value);
        }
        else{
            minST.push(min(value,minST.top()));
        }
    }
    
    void pop() {
        st.pop();
        minST.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
       return minST.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */