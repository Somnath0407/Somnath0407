class Solution {
public:
    int maxarray(vector<int>& piles,int n){
        int top=piles[0];
        for(int i=1;i<n;i++){
            if(top<piles[i]){
                top=piles[i];
            }
        }
        return top;
    }
    long long fun(vector<int>& piles,int n,int mid){
        long long h=0;
        for(int i=0;i<n;i++){
            h+=(piles[i]/mid);
            if(piles[i]%mid!=0) h++;
        }
        return h;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int low=1,high=maxarray(piles,n);
        int res=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long hour=fun(piles,n,mid);
            if(hour>h){
                low=mid+1;
            }
            else{
                res=mid;
                high=mid-1;
            }
        }
        return res;
    }
};