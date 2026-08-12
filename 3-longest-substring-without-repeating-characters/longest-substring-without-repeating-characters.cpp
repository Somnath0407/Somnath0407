class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int a=0;
        int maxlen=0;
        for(int i=0;i<s.length();i++){
            if(mp.find(s[i]) !=mp.end()){
                a=max(a,mp[s[i]]+1);
            }
            mp[s[i]]=i;
            maxlen= max(maxlen,i-a+1);
        }
        return maxlen;
    }
};