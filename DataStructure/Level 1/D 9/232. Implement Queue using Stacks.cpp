class MyQueue {
public:    
    MyQueue() {
        
    }
    
    void push(int x) {
        queue.push(x);
    }
    
    int pop() {
        if(reverse.empty()) {
           while(!queue.empty()) {
                reverse.push(queue.top());
                queue.pop();
            } 
        }
        
        int value = reverse.top();
        reverse.pop();
        return value;
    }
    
    int peek() {
        if(reverse.empty()) {
           while(!queue.empty()) {
                reverse.push(queue.top());
                queue.pop();
            } 
        }
        
        return reverse.top();
    }
    
    bool empty() {
        return queue.empty() && reverse.empty();
    }
    
private:
    stack<int> queue;
    stack<int> reverse;
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */