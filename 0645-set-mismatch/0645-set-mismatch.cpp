class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        map<int,int> mpp;
        vector<int>res;
        for(int x:nums){
            mpp[x]++;
        }
        for(auto it:mpp){
            if (it.second>1){
                res.push_back(it.first);
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mpp[i]==0){
                res.push_back(i);
            }
        }
        return res;
    }
};