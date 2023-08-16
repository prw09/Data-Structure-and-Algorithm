class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
             int n= letters.size();
             if(target>=letters[n-1]) return letters[0];
   
   
    int l = 0, r = letters.size() - 1;
 
    // Tatargete the first element as l and
    // the rightmost element as r
    int ans = -1;
    while (l <= r) {
 
        // if this while condition does not satisfy
        // simply return the first element.
        int mid = (l + r) / 2;
        if (letters[mid] > target)
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }
 
    // Return the smallest element
    return letters[ans];  
    }
};