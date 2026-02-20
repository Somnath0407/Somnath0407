class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int nodel=arr[0];
        int res=arr[0];
        int onedel=INT_MIN;
        for(int i=1;i<arr.size();i++){
            int prevnodel=nodel;
            int prevonedel=onedel;
            int sum=nodel+arr[i];
            int org=arr[i];
            int v2;
            nodel=max(org,sum);
            if(onedel==INT_MIN) v2=arr[i];
            else v2=prevonedel+arr[i];
            onedel=max(v2,prevnodel);
            res=max(res,{max(nodel,onedel)});
        }
        return res;
    }
};