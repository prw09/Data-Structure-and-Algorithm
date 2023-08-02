class Solution 
{
public:
    void moveZeroes(vector<int>& nums) 
    {
        
        //     vector<int> a;
        //     int count=0;
        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]==0)
        //         count++;
        //     else
        //         a.push_back(nums[i]);
        // }
        
        // while(count--)
        //     a.push_back(0);
        // for(int i=0;i<nums.size();i++){
        //     nums[i]=a[i];
        // } 

        // optimal solution 
        // Dutch National Flag Algo....

            int j=0,count=0, n=nums.size();
        while(count<n){
         if(nums[count]==0)
              count++;
         else{
              int temp=nums[j];
              nums[j]=nums[count];
              nums[count]=temp;
              j++;
              count++;
            }
        }
}
    
    
};