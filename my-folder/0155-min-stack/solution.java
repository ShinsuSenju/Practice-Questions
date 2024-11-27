class MinStack {

    Stack<Integer> minStack;
    Stack<Integer> actStack;
    public MinStack() {
        minStack = new Stack<>();
        actStack = new Stack<>();
    }
    
    public void push(int val) {
        actStack.push(val);
        if (minStack.isEmpty() || val <= minStack.peek()) {
            minStack.push(val);
        }
    }
    
    public void pop() {
        if(actStack.isEmpty()) return ;
        int temp = actStack.pop();
        if(!minStack.isEmpty() && temp==minStack.peek()){
            minStack.pop();
        }
        
    }
    
    public int top() {
        return actStack.peek();
    }
    
    public int getMin() {
        return minStack.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
