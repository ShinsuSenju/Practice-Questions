class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int k=n*n;
        int m=maxWeight/w;
        return min(k,m);
    }
};
