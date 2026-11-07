class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mpp;
        mpp[0]=1;
        int cont=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            int remove=sum-k;
            cont+=mpp[remove];
            mpp[sum]+=1;
        }
        return cont;
    }
};