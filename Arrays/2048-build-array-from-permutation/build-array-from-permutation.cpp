class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
    //     vector<int> ans ;
    //     for(int i=0; i<nums.size(); i++){
    //         ans.push_back(nums[nums[i]]);
    //     }
    //     return ans;
    //  }

    // optimized solution with o(n) complexity.....
    int n = nums.size();
    
    for(int i=0; i<n; i++){
        nums[i] = n * (nums[nums[i]]%n) + nums[i];
        // here the n is length which muiltplyed with nums value and then module is taken plus current value is added...

    }

    for(int i=0; i<n; i++){
        nums[i] = nums[i] / n;
        // here the value is nums value is divided by the length to the rsultant value...
    }

    return nums;
    }
};
