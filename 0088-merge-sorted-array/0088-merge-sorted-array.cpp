class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int n1=n+m;
        int n2=n;
        int i=m-1,j=n-1,k=n+m-1;
        while(j>=0){
        if(i<0){
            nums1[k]=nums2[j];
            k--;
            j--;
            continue;
        }

            if(nums2[j]>nums1[i]){
                nums1[k]=nums2[j];
                j--;
                k--;
            }
            else if(nums1[i]>nums2[j]){
                nums1[k]=nums1[i];
                i--;
                k--;
            }
            else if(nums1[i]==nums2[j]){
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
    }
};