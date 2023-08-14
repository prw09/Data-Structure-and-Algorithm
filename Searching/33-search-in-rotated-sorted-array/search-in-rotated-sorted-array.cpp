class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // Linear Search Approach ...
        // int n = nums.size() , x = target;
        // for(int i=0; i<n; i++){
        //     if(nums[i] == x){
        //         return i;
        //     }
        // }

        // return -1;

        // Binary Search Approach.....

    int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
      const int m = (l + r) / 2;
      if (nums[m] == target)
        return m;
      if (nums[l] <= nums[m]) {  // nums[l..m] are sorted
        if (nums[l] <= target && target < nums[m])
          r = m - 1;
        else
          l = m + 1;
      } else {  // nums[m..n - 1] are sorted
        if (nums[m] < target && target <= nums[r])
          l = m + 1;
        else
          r = m - 1;
      }
    }

    return -1;
    }
};