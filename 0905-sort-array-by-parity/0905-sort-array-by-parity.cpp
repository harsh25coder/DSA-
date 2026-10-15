class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int even =0,odd=nums.size()-1;
        while(even<=odd){
          if(nums[even]%2==0 &&  nums[odd]%2==1){
            even++;
            odd--;
        }
        else if(nums[even]%2==1 && nums[odd]%2==0){
            swap(nums[even],nums[odd]);
            even++;
            odd--;
        }
        else if(nums[even]%2==0 && nums[odd]%2==0){
            even++;
        }
        else if(nums[even]%2==1 && nums[odd]%2==1){
            odd--;
        }
        }
    return nums;
    }
};