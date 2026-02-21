class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodel=arr[0];
        int res=arr[0];
        int onedel=0;
        for(int i=1;i<arr.size();i++){
            int prevnodel=nodel;
            int prevonedel=onedel;
            int sum=prevnodel+arr[i];
            int org=arr[i];
            nodel=max(org,sum);
            int v2=prevonedel+arr[i];
            onedel=max(v2,prevnodel);
            res=max(res,{max(nodel,onedel)});
        }
        return res;
    }
};