class MinStack {
private:
   stack<int> ori_stk,min_stk;
public:
    MinStack() {
       
        
    }
    
    void push(int val) {
       ori_stk.push(val);
        if ( min_stk.empty() || val <= min_stk.top() )
            s2.push(val);
    }
    
    void pop() {
        if (min_stk.top() >= ori_stk.top())
            min_stk.pop();
        ori_stk.pop();
    }
    
    int top() {
        return ori_stk.top();
    }
    
    int getMin(){
        return min_stk.top();
    }
};
