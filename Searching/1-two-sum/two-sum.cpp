class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       
       int onept = 0, twopt=0 , n = nums.size();

       for(int i=0;i<n-1;i++)
        {
            for(int j=i+1; j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    onept=i;
                    twopt=j;
                }
            }
        }
        return {onept,twopt};  
    }  
};