class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        //  set <int> str;

        //  for(int i=0; i<nums.size(); i++){
        //      str.insert(nums[i]);
        //  }

        //  int index = 0;
        //  for(auto it: str){
        //      nums[index] = it;
        //      index++;
        //  }

        //  return index;

        // optimal solution...
        int i = 0;
        for(int j=0; j<nums.size(); j++){
            if(nums[i] != nums[j]){
                nums[i+1] = nums[j];
                i++;
            }
        }
        return (i+1);
    }
};
