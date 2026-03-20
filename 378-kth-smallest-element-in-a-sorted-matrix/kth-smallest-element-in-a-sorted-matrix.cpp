class Solution {
public:
int helper(vector<vector<int>>& matrix,int mid,int n,int m){
    int count=0;
    int row=n-1,col=0;
    while(row>=0 && col<m){
        if(matrix[row][col]<=mid){
            count+=(row+1);
            col++;
        }
        else row--;
    }
    return count;
}
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size();
        int m=matrix[0].size();
        int low=matrix[0][0];   
        int high=matrix[n-1][m-1]; 
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            int element=helper(matrix,mid,n,m);
            if(element>=k){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};