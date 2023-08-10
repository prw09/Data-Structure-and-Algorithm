class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        
    int N = nums.size();
    bool inc = true;
    bool dec = true;
 
    // Loop to check if numsay is increasing
    for (int i = 0; i < N - 1; i++) {
 
        // To check if
        // numsay is not increasing
        if (nums[i] > nums[i + 1]) {
            inc = false;
        }
    }
 
    // Loop to check if numsay is decreasing
    for (int i = 0; i < N - 1; i++) {
 
        // To check if
        // numsay is not decreasing
        if (nums[i] < nums[i + 1]) {
            dec = false;
        }
    }
 
    // Pick one whether inc or dec
    return inc || dec;

    }
};