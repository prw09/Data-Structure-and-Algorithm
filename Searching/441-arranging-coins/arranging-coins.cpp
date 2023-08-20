class Solution {
public:
    int arrangeCoins(int n) {
    
    // edge case
    // if(n==0){
    //     return 0;
    // }
    
    // int start = 1;
    // int end = n;
    // int mid=0;
    // int ans = 0;
    
    // while(start<=end){
    //     mid = start + (end-start)/2;
        
    //     //if k is a perfect square
    //     if((mid*(mid+1))/2 == n){
    //         return mid;
    //     }
        
    //     //if k is less than a perfect square
    //     else if((mid*(mid+1))/2 < n){
    //         start = mid+1;
    //         ans = mid;
    //     }
        
    //     //if k is more than a perfect square
    //     else{
    //         end = mid-1;
    //     }
    // }
    
    // return ans;
    

    // Base case
        // if (n == 0) {
        //     return 0;
        // }
        
        // // Recursive case
        // return 1 + arrangeCoins(n - 1);


        int coins = n;
        for(int i=1;i<=n;i++){
            coins=coins-i;
            if(coins<0){
                return i-1;
            }
        }
         
        return 1;

    }
};