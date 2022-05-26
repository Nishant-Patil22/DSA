class MyQueue {
    stack<int> back,frnt;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        back.push(x);
    }
    
    int pop() {
        int top;
        if (frnt.empty() && back.empty())
            return 0;
        else if(frnt.empty())
        {
            while(!back.empty())
            {
                frnt.push(back.top());
                back.pop();
            }
        }
        top=frnt.top();
        frnt.pop();
        return top;
    }
    
    int peek() {
        if(frnt.empty())
        {
            while(!back.empty())
            {
                frnt.push(back.top());
                back.pop();
            }
        }
        return frnt.top();
    }
    
    bool empty() {
        return(frnt.empty() && back.empty());
    }
};
