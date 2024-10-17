class Solution {
    public int maximumSwap(int num) {
        List<Integer> digitArray = new ArrayList<>();
        int temp = num;
        while(temp > 0){
            int rem = temp % 10;
            digitArray.add(0, rem);
            temp = temp / 10;
        }
        
        for(int i = 0; i < digitArray.size() - 1; i++){
            int maxInd = i;
            
         
            for(int j = i + 1; j < digitArray.size(); j++){
               
                if(digitArray.get(j) >= digitArray.get(maxInd)){
                    maxInd = j;
                }
            }
            
            if(digitArray.get(maxInd) != digitArray.get(i)){
                int tempDigit = digitArray.get(i);
                digitArray.set(i, digitArray.get(maxInd));
                digitArray.set(maxInd, tempDigit);
                break; 
            }
        }
        
        int ans = 0;
        for(int i : digitArray){
            ans = ans * 10 + i;
        }
        return ans;
    }
}

