# # class Solution:
# #   def reverseString(self, s: List[str]) -> None:
# #     # l = 0
# #     # r = len(s) - 1

# #     # while l < r:
# #     #   s[l], s[r] = s[r], s[l]
# #     #   l += 1
# #     #   r -= 1

# #    a = len(s) - 1
# #    result = ''
  
    
# #    while a>= 0:
# #     result = result + s[a]
# #     result = result - 1 


# class Solution:
#   def reverseString(self, s: List[str]) -> None:
#     a = len(s) - 1
#     result = ''
    
#     while a >= 0:
#       result = result + s[a]
#       a -= 1
      
#     # Since we need to modify the list in place, we need to update the original list 's'
#     for i in range(len(s)):
#       s[i] = result[i]


class Solution:
  def reverseString(self, s: List[str]) -> None:
    l = 0
    r = len(s) - 1

    while l < r:
      s[l], s[r] = s[r], s[l]
      l += 1
      r -= 1
