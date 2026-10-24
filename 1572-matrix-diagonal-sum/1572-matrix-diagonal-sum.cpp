class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
            int sum=0;
            int sum2=0;
            int n=mat.size();
        for (int i=0;i<n;i++){
            sum+=mat[i][i];
        }
        for(int i=0;i<n;i++){
            sum2+=mat[i][n-1-i];
        }
        if(n%2==0){
            return sum+sum2;
        }
        else {
            return (sum+sum2)-mat[n/2][n/2];
        }
    }
};