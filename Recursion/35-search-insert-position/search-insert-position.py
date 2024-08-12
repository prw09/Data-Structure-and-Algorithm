class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        index = 0

        for i in nums:
            if i >= target:  
                # Should be >= to handle cases where target is equal to an element in the list
                break
            else:
                index += 1

        return index
