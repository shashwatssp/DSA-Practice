class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int maxSoFar=INT_MIN;
        int curSum=0;
        
        for(auto it: arr){
            curSum+= it;
            
            if(curSum>maxSoFar){
                maxSoFar = curSum;
            }
            
            if(curSum<0){
                curSum=0;
            }
        }
        
        return maxSoFar;
        
    }
};