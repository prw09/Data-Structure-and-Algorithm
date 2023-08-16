class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // lowinear Search Approach ...
        // int n = nums.size() , x = target;
        // for(int i=0; i<n; i++){
        //     if(nums[i] == x){
        //         return i;
        //     }
        // }

        // return -1;

        // Binary Search Approach.....

    int low = 0;
    int high = nums.size() - 1, n = nums.size();
    while (low <= high) {
        int mid = (low + high) / 2;

        //if mid points the target
        if (nums[mid] == target) return mid;

        //if left part is sorted:
        if (nums[low] <= nums[mid]) {
            if (nums[low] <= target && target <= nums[mid]) {
                //element exists:
                high = mid - 1;
            }
            else {
                //element does not exist:
                low = mid + 1;
            }
        }
        else { //if right part is sorted:
            if (nums[mid] <= target && target <= nums[high]) {
                //element exists:
                low = mid + 1;
            }
            else {
                //element does not exist:
                high = mid - 1;
            }
        }
    }
    return -1;
   
    
    }
};