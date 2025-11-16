class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        
        int missingNumber=0;
        
        for(auto it: arr){
            missingNumber^=it;
        }
        
        for(int i=1;i<=n+1;i++){
            missingNumber^=i;
        }
        
        return missingNumber;
        
    }
};