class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        // Navie solution
        // int count = 0;
        // for(int i=0;i<nums.size()-1;i++)
        // {
        //     for(int j=i+1;j<nums.size();j++)
        //     {
        //         if(i<j && nums[i]==nums[j])
        //             count++;
        //     }
        // }
        // return count;

        // optimized with hashing 

        int count = 0;
        unordered_map<int,int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans[nums[i]]++;
        }
        
        for(auto it: ans)
        {
            int val = it.second;
            count = count + (val*(val-1))/2;
        }
        return count;

    }
};