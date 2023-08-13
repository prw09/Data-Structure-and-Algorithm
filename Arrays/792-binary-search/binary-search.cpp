class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        // start and end of the array..

        while(start <= end)
        {
            // find the middlw element ...

            int middle = start + (end - start)/2;
            // here the range of int in cpp migth get exceeded     then you should so we use this formulae....

            if(target < nums[middle]){
                end = middle - 1;
                // here the start is the first element in the sorted array but the end is middle -1 ele ....
            }
            else if(target > nums[middle]){
                 start = middle + 1;
                 // here the element is on the rigth side of the array so middle + 1....
            }

            else{
                return middle;
                // found the ans if the element is middle only....
            }
        }

        return -1;
    }
};