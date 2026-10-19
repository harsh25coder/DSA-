class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int n=nums.size();
         int count=0,element=0;
         for(int i=0;i<n;i++){
            if(count==0){
                count=1;
                element=nums[i];
            }
            else if(nums[i]==element){
                count++;
            }
            else count --;
         }
         int cnt2=0;
         for(int i=0;i<n;i++){
            if(nums[i]==element){
                cnt2++;
            }
         }
         if(cnt2>n/2){
            return element;
         }
         return -1;
    }
};