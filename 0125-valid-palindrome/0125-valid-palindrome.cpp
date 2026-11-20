class Solution {
public:
     bool helper(string &s,int i){
        int n=s.size();
        if (i>=n/2){
            return true;
        }
        if(s[i]!=s[n-i-1]) return false;
        return helper(s,i+1);
     }
    bool isPalindrome(string s) {
            string temp="";
        for (auto it :s){
            if(isalnum(it)){
                temp+=tolower(it);
            }
        }
        return helper(temp,0);
    }
};