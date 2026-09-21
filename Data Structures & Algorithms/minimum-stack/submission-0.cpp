class MinStack {
public:
    stack<int> st;

    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()) {
            st.pop();
        } 
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        stack<int> temp = st;

        int mini = temp.top();

        while(!temp.empty()) {
            mini = min(mini, temp.top());
            temp.pop();
        }

        return mini;
    }
};