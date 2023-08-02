class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector<int> a;
        int count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)
            count++;
        else
            a.push_back(nums[i]);
    }
    
    while(count--)
        a.push_back(0);
    for(int i=0;i<nums.size();i++){
        nums[i]=a[i];
    } 


    
    }
};