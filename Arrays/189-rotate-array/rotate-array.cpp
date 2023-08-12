class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        int temp;
        vector<int>v(nums);
        for(int i=0; i<n; i++){
            nums[(i+k)%n] = v[i];
        }
    }
};