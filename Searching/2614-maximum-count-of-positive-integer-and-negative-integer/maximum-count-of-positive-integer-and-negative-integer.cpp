class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int cntpositive = 0, cntnegative = 0 , n = nums.size();
       
      // traverse the bnumsay to count
      // occurrences of positive and negative numbers
      for(int i = 0; i < n; i++) {
          if( nums[i] > 0 )
              cntpositive++;
          else if( nums[i] < 0 )
              cntnegative++;
    }
   
      // return maximum among positive
      // and negative count
      return max(cntpositive, cntnegative);

    }
};