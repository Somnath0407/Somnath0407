class Solution {
public:
    bool sehi(vector<int>&need ,vector<int>&have){
        for(int i=0;i<256;i++){
            if(have[i]<need[i]){
                return false;
            }
        }
        return true;
    }
    string minWindow(string s, string t) {
        int n=s.size();
        int m=t.size();
        vector<int>need(256,0);
        vector<int>have(256,0);
        if(n<m) return "";
        for(int i=0;i<m;i++){
            need[t[i]]++;
        }
        int low=0,res=INT_MAX;
        int start=-1;
        for(int high=0;high<n;high++){
            have[s[high]]++;
            while(sehi(need,have)){
                int len=high-low+1;
                if(len<res){
                    res=len;
                    start=low;
                }
                have[s[low]]--;
                low++;
            }
        }
        if(res==INT_MAX) return "";
        return s.substr(start,res);
    }
};