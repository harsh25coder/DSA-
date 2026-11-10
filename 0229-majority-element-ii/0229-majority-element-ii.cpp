class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(res.empty() || res[0]!=nums[i]){
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[j]==nums[i]){
                count++;
                }
            }
                if(count>n/3){
                    res.push_back(nums[i]);
        }
            }
        if(res.size()==2){
            break;
        }
        }
            return res;
    }
};