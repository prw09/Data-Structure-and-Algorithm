class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mpp;
        int n =nums.size();
        for(int i=0; i<n; i++){
            int num = nums[i];
            int noMoreNeeded = target - num;
            if(mpp.find(noMoreNeeded)!= mpp.end()) {
                return {mpp[noMoreNeeded] ,i};
            }

            mpp[num] = i;
        }
       return{-1, -1}; 
    }
};