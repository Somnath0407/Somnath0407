class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size(); 
        unordered_map<char,int>need;
        for(int i=0;i<n;i++){ 
            need[s[i]]++;
        }
        int res=0;
        bool ay=false;
        for(auto i:need){
            if(i.second%2==0){
                res+=i.second;
            }
            else {
                res+=(i.second-1);
                ay=true;
            }
        }
        if(ay) return res+1;
        return res;
    }
};