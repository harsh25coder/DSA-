class Solution {
public:
    int maxProfit(vector<int>& nums) {
      int mini=nums[0];
      int maxx=0;
      for(int i=1;i<nums.size();i++){
        int count=nums[i]-mini;
        maxx=max(count,maxx);
        mini=min(nums[i],mini);
      }  
      return maxx;
    }
};