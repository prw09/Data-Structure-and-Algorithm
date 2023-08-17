class Solution {
public:
    int maximumCount(vector<int>& nums) {
     //   int cntpositive = 0, cntnegative = 0 , n = nums.size();
       
      // traverse the nums to count
    //   // occurrences of positive and negative numbers
    //   for(int i = 0; i < n; i++) {
    //       if( nums[i] > 0 )
    //           cntpositive++;
    //       else if( nums[i] < 0 )
    //           cntnegative++;
    // }
   
    //   // return maximum among positive
    //   // and negative count
    //   return max(cntpositive, cntnegative);

    // Binary Search ....

        // int n = nums.size();
        // int low = 0 , mid , high = n - 1;

        // while(low<=high){

        // mid = low + (high - low) / 2;

        // if(nums[mid] > 0)
        //     low = mid + 1;

        // else if(nums[mid] < 0)
        //     high = mid - 1;
        // }
        // return (low , n - 1); 

        // best approach
        int neg = 0, pos = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] < 0) {
                neg++;
            } else if(nums[i] > 0){
                pos++;
            }
        }
        return pos > neg ? pos: neg;


    }
};