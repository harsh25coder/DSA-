class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int counter=0;
        int maxcounter=0;
        int lastsmall=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastsmall){
                counter+=1;
                lastsmall=nums[i];
            }
            else if(nums[i]!=lastsmall){
                counter=1;
                lastsmall=nums[i];
            }
            maxcounter=max(maxcounter,counter);
        }
        return maxcounter;
    }
};