class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int n=nums.size();
     map<int ,int>find;
     for(int x:nums){
        find[x]++;
     }
     for(auto it:find){
        if(it.second==1){
            return it.first;
        }
     }
     return -1;
    }
};