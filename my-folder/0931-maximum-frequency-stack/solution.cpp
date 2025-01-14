class FreqStack {
public:
    unordered_map<int,int> mp;
    vector<stack<int>> st;
    FreqStack() {
      
    }
    
    void push(int val) {
        mp[val]++;
        int freq = mp[val];
        int size = st.size();
        if(freq>size){
            st.push_back(stack<int>());
        }
        st[freq-1].push(val);    
    }
    
    int pop() {
        int size= st.size();
        int ele = st[size-1].top();
        st[size-1].pop();
        mp[ele]--;
        if(mp[ele]==0)mp.erase(ele);
        if(st[size-1].empty()) st.pop_back();
        return ele;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
