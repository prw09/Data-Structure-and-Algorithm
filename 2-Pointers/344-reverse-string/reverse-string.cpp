class Solution {
public:
    void reverseString(vector<char>& s) {
        
        // navie a approach...
        int n = s.size();
        int start = 0;
        int end = n - 1;

        while(start<end){
            swap(s[start++], s[end--]);
        }
    }
};