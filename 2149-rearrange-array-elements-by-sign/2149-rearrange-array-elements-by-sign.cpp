class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        vector<int>result;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                arr1.push_back(nums[i]);
            }
            else if (nums[i]<0){
                arr2.push_back(nums[i]);
            }
        }
        for(int i=0;i<n/2;i++)  {
            result.push_back(arr1[i]);
            result.push_back(arr2[i]);
        }

    return result;
    }
};