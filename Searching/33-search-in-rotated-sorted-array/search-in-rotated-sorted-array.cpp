class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        // Linear Search Approach ...
        int n = nums.size() , x = target;
        for(int i=0; i<n; i++){
            if(nums[i] == x){
                return i;
            }
        }

        return -1;
    }
};