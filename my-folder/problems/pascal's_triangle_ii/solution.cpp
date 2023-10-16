class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> triangle;
        triangle.push_back({1});
        triangle.push_back({1,1});
        for(int i=2;i<=rowIndex;i++){
            vector<int> temp(i+1,1);
            for(int j=1;j<i;j++)temp[j]= triangle[i-1][j]+triangle[i-1][j-1];
            triangle.push_back(temp);

        }
        return triangle[rowIndex];
        
    }
};