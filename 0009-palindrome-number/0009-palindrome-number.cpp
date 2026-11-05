class Solution {
public:
    bool isPalindrome(int x) {
        long ans=0,rem;
        int cop=x;
        if(x<0)return false;
    while(x){
        rem=x%10;
        x=x/10;
        ans=ans*10+rem;
    }
    if(ans!=cop){
        return false;
    }
    else return true;
    return false;
    }
};