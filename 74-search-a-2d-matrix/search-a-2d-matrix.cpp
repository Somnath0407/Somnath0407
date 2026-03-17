class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low=0,high=n-1;
        int row=0;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(matrix[mid][0]<=target){
                row=mid;
                low=mid+1;
            }
            else{
                high=mid-1;
            }
            if(row==-1) return false;
            int l=0,r=m-1;
            while(l<=r){
                int mid=l+(r-l)/2;
                if(matrix[row][mid]==target) return true;
                else if(matrix[row][mid]>target) r=mid-1;
                else l=mid+1;
            }
        }
        return false;
    }
};