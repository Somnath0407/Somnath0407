class Solution {
public:
    int find(vector<int> &m){
        int maxc=-1;
        for(int i=0;i<m.size();i++){
            maxc=max(maxc,m[i]);
        }
        return maxc;
    }
    int characterReplacement(string s, int k) {
        vector<int> m(256,0);
        int low=0,high=0,res=INT_MIN;
        for(int high=0;high<s.size();high++){
            m[s[high]]++;
            int maxcnt=find(m);
            int len=high-low+1;
            int diff=len-maxcnt;
            while(diff>k){
                m[s[low]]--;
                low++;
                maxcnt=find(m);
                len=high-low+1;
                diff=len-maxcnt;
            }
            res=max(res,high-low+1);
        }
        return res;
    }
};