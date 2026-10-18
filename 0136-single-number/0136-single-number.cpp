class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xx=0;
        for(int i=0;i<nums.size();i++){
            xx=xx^nums[i];
        }
        return xx;
    }
};