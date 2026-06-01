class MyStack {
    queue<int> q1;
    queue<int> q2;
public:
    MyStack() {
    }
    
    void push(int x) {
        if(q1.empty()){
            q1.push(x);
        }
        else{
            q2.push(x);
            while(!q1.empty()){
                int front=q1.front();
                q1.pop();
                q2.push(front);
            }
            swap(q1,q2);
        }
    }
    
    int pop() {
        int front=q1.front();
        q1.pop();
        return front;
        
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};
