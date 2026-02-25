class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        int n=firstList.size();
        int m=secondList.size();
        vector<vector<int>>res;
        int i=0,j=0;
        while(i<n && j<m){
            int start1=firstList[i][0];
            int end1=firstList[i][1];
            int start2=secondList[j][0];
            int end2=secondList[j][1];
            if(start1<=start2){
                if(end1>=start2){
                    int s=max(start1,start2);
                    int e=min(end1,end2);
                    res.push_back({s,e});
                }
            }
            else{
                if(end2>=start1){
                    int s=max(start1,start2);
                    int e=min(end1,end2);
                    res.push_back({s,e});
                }
            }
            if(end1>end2) j++;
            else i++;
        }
        return res;
    }
};