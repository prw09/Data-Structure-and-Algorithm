// class Solution {
// public:
    // int searchInsert(vector<int>& nums, int target) {

            // int count = 0; 
            // for(int i=0; i<nums.size(); i++){
            //     if(nums[i] == target){
            //         return count;
            //     }
            // }
            // return -1;       


            // Binary Search Approach....

//              int start = 0;
//         int end = nums.size() - 1;
//         // start and end of the array..

//         while(start <= end)
//         {
//             // find the middlw element ...

//             int middle = start + (end - start)/2;
//             // here the range of int in cpp migth get exceeded     then you should so we use this formulae....

//             if(target < nums[middle]){
//                 end = middle - 1;
//                 // here the start is the first element in the sorted array but the end is middle -1 ele ....
//             }
//             else if(target > nums[middle]){
//                  start = middle + 1;
//                  // here the element is on the rigth side of the array so middle + 1....
//             }

//             else{
//                 return middle;
//                 // found the ans if the element is middle only....
//             }
//         }

//         return start;    
//     }
// };


int searchInsert(vector<int>& arr, int x)
{
	// Write your code here.
    // it is the lower bound implementation of the code...
	int n = arr.size();
	int low = 0 , high = n-1;
	int mid , ans = n;

	while(low<=high){
		mid = (low + high) / 2;

		if(arr[mid] >= x){
			ans = mid;
			high = mid - 1;
		}

		else{
			low = mid + 1;
		}
	}

	return ans;	

}

class Solution {
    int binary_search(vector<int>&nums,int left,int right,int target){
        if(left > right)
            return left;
        int mid = (left + right) >> 1;
        if(nums[mid] == target)
            return mid;
        if(nums[mid] > target)
            return binary_search(nums, left, mid - 1, target);
        else
            return binary_search(nums, mid + 1, right, target);
    }
    public:
    int searchInsert(vector<int>& nums, int target) {
        if(!nums.size())
            return 0;
        return binary_search(nums, 0, nums.size() - 1, target);
    }
};
