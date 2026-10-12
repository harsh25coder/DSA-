class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start=0,end=nums.size()-1;
            vector<int>res;
            int n=nums.size();
        while(start<=end){
            if(nums[end]*nums[end]>nums[start]*nums[start]){
                res.push_back(nums[end]*nums[end]);
                end--;
            }
            else if(nums[start]*nums[start]>nums[end]*nums[end]){
                res.push_back(nums[start]*nums[start]);
                start++;
            }
            else { 
                res.push_back(nums[end]*nums[end]);
                end--;

            }
        }   

        reverse(res.begin(),res.end());  
        return res;
        
    }
};