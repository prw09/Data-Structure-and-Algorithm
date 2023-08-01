class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
         set <int> str;

         for(int i=0; i<nums.size(); i++){
             str.insert(nums[i]);
         }

         int index = 0;
         for(auto it: str){
             nums[index] = it;
             index++;
         }

         return index;
    }
};