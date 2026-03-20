class Solution {
public:
int helper(int m,int n,int mid){
    int row=n-1,col=0;
    int count=0;
    while(row>=0 && col<m){
        if((row+1)*(col+1)<=mid){
            count+=(row+1);
            col++;
        }
        else row--;
    }
    return count;
}
    int findKthNumber(int m, int n, int k) {
        int low=1,high=m*n;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int element=helper(m,n,mid);
            if(element>=k){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
};