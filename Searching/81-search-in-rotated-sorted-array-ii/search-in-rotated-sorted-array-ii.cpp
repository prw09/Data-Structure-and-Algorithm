class Solution {
public:
    bool search(vector<int>& nums, int target) {
        
        // int low = 0, mid, high = nums.size() - 1;

        // while(low<=high){
        //     mid = (low + high) / 2;

        //     if(nums[mid] == target) return true;

        //     if(nums[low] == nums[mid] == nums[high])
        //             low = low + 1;
        //             high = high - 1;
        //             continue;

        //     if(nums[low]<=nums[mid])
        //         if(nums[low] <= target && nums[mid] <= target)
        //                 high = mid - 1;

        //         else
        //             low = mid + 1;

        //     else
        //         if(nums[mid] == target && nums[high] == target)
        //             low = mid + 1;

        //         else
        //             high = mid - 1; 
        // }

        // return false;


        int l = 0;
    int r = nums.size() - 1;

    while (l <= r) {
      const int m = (l + r) / 2;
      if (nums[m] == target)
        return true;
      if (nums[l] == nums[m] && nums[m] == nums[r]) {
        ++l;
        --r;
      } else if (nums[l] <= nums[m]) {  // nums[l..m] are sorted
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

    return false;
    }
};