class MinStack {
private:
   stack<int> oristk,minstk;
public:
    MinStack() {
       
        
    }
    
    void push(int val) {
       oristk.push(val);
        if ( minstk.empty() || val <= minstk.top() )
            s2.push(val);
    }
    
    void pop() {
        if (minstk.top() >= oristk.top())
            minstk.pop();
        oristk.pop();
    }
    
    int top() {
        return oristk.top();
    }
    
    int getMin(){
        return minstk.top();
    }
};
