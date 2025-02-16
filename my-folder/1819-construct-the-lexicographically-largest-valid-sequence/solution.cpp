class Solution {
public:
    bool backtrack(vector<bool>& used,vector<int>& seq, int n, int index){
        // increase index while a empty place(0) is found
        while(index<seq.size() && seq[index]!=0) index++;
        // if no empty place is found that is all element are placed
        if(index==seq.size()) return true;
        for(int i = n;i>=1;i--){
            // check if current no if used
            if(used[i]) continue;
            else if(i==1){
                seq[index] = i;
                used[i] = true;
                //check if further placements are possible
                if(backtrack(used,seq,n,index+1)) return true;
                //backtrack
                seq[index]=0;
                used[i] = false;
            }
            else if(index + i < seq.size() && !seq[index+i]){
                seq[index] = i;
                seq[index+i]=i;
                used[i] = true;
                //check if further placements are possible
                if(backtrack(used,seq,n,index+1)) return true;
                //backtrack
                seq[index]=0;
                seq[index+i]=0;
                used[i] = false;
                
            }
        }
        return false;
    }
    vector<int> constructDistancedSequence(int n) {
        vector<bool> used(n+1,false);
        vector<int> seq(2*n-1,0);
        backtrack(used,seq,n,0);
        return seq;
        
    }
};
