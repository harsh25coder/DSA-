class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        vector<int>hash(n+1,0);
        for(int x:nums){
            hash[x]++;
        }
        for(int i=0;i<nums.size()+1;i++){
            if(hash[i]==0){
                return i;
            }
        }
        return -1;
    }
};