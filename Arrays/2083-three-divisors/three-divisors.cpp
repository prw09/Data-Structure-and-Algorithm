class Solution {
public:
    bool isThree(int n) {
         int ans = 0;
        for (int i = 1; i <= n && ans <= 3; ++i) {
            if (n % i == 0) ++ans;
        }
        return ans == 3;
 
    }
};