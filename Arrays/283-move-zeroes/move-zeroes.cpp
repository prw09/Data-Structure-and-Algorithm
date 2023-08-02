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

//This code appears to be an implementation of a technique called "Dutch National Flag" algorithm, which is used to sort an array containing three types of elements (in this case, the elements are 0s and non-zeroes) in linear time complexity. The variables `lt`, `rt`, and `n` are used to keep track of the positions in the array.

// Here's a step-by-step explanation of the code:

// 1. Initialize three variables: `lt` (left pointer) to 0, `rt` (right pointer) to 0, and `n` to the size of the input array `nums`.

// 2. The while loop will continue as long as `rt` is within the bounds of the array, i.e., `rt < n`.

// 3. Inside the while loop, there's an if-else condition.

// 4. If `nums[rt]` is equal to 0, it means that we have encountered a zero element. In this case, we increment the `rt` pointer to the next position and keep searching for non-zero elements.

// 5. If `nums[rt]` is not equal to 0 (i.e., a non-zero element is found), we swap the elements at `lt` and `rt` positions to move the non-zero element to the left side of the array.

// 6. After the swap, we increment both `lt` and `rt` pointers by one to continue the search.

// The goal of this algorithm is to rearrange the elements in the array `nums` in such a way that all the 0s are placed on the left side, and all the non-zero elements are on the right side of the array, without changing the order of non-zero elements relative to each other.

// The time complexity of this algorithm is O(n), where n is the size of the array `nums`, as each element in the array is processed exactly once. The algorithm sorts the array in place, without using any additional memory other than the two pointers and the temporary variable `temp` used for swapping.