class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i:students){
            q.push(i);
        }
        int skip = 0;
        reverse(sandwiches.begin(),sandwiches.end());
        while(!q.empty() && skip < q.size()){
            if(q.front()==sandwiches.back()){
                q.pop();
                sandwiches.pop_back();
                skip=0;
            }
            else{
                q.push(q.front());
                q.pop();
                skip++;
            }
        }

        return q.size();

        
    }
};
