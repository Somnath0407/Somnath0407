class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>m;
        int low=0,high=0,res=INT_MIN;
        for(int high=0;high<s.size();high++){
            m[s[high]]++;
            int k=high-low+1;
            while(m.size()<k){
                m[s[low]]--;
                if(m[s[low]]==0) m.erase(s[low]);
                low++;
                k=high-low+1;
            }
            res=max(res,high-low+1);
        }
        if(res==INT_MIN) return 0;
        return res;
    }
};