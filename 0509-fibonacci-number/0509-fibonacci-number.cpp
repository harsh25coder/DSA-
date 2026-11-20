class Solution {
public:
    int helper(int n){
        if(n<=1){
            return n;
        }
        int first=helper(n-1);
        int last=helper(n-2);
        return first+last;

    }
    int fib(int n) {
         return helper(n);
    }
};