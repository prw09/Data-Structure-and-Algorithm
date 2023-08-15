class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       
    //    Binary search approach.....
    //    vector<int> indices;
        // sort(nums.begin(),nums.end());

        // int lb=0,ub=(int)nums.size()-1;
        // int mid;

        // while(lb<=ub)
        // {
        //     mid=lb+(ub-lb)/2;
        //     if(nums[mid]==target)
        //     {
        //         indices.push_back(mid);
        //         break;
        //     }
        //     else if(nums[mid]>target)
        //     {
        //         ub=mid-1;
        //     }
        //     else lb=mid+1;
        // }

        // lb = mid-1;
        // while(lb >= 0 && nums[lb] == target){
        //     indices.insert(indices.begin(), lb);
        //     lb--;
        // }
        
        // ub = mid+1;
        // while(ub <= (int)(nums.size()-1) && nums[ub] == target){
        //     indices.push_back(ub);
        //     ub++;
        // }

        //  without sorting ...

        vector<int> ans;
        
        int index = 0;
        int frequency = 0;
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < target)
                index++;
            else if(nums[i] == target)
                frequency++;
        }
        
        while(frequency > 0){
            ans.push_back(index);
            frequency--;
            index++;
        }
        return ans;
    }
};