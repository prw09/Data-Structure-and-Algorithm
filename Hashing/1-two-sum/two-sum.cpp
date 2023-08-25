class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
    //    int onept = 0, twopt = 0;
       int n = nums.size();

    //    for(int i=0;i<n-1;i++)
    //     {
    //         for(int j=i+1; j<n;j++)
    //         {
                
    //             // if(nums[i] == nums[j]) continue;
    //             if(nums[i]+nums[j]==target)
    //             {
    //                 onept=i;
    //                 twopt=j;
    //             }
    //         }
    //     }
    //     return {onept,twopt};  


            // Hashing Approch...

    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        int num = nums[i];
        int moreNeeded = target - num;
        if (mpp.find(moreNeeded) != mpp.end()) {
            return {mpp[moreNeeded], i};
        }
        mpp[num] = i;
    }
    return { -1, -1};


    }  
};