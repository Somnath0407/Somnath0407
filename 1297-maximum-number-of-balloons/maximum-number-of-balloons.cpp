class Solution {
public:
    int maxNumberOfBalloons(string text) {
        int n=text.size();
        unordered_map<char,int>need;
        unordered_map<char,int>have;
        string te="balloon";
        for(int i=0;i<te.size();i++){
            need[te[i]]++;
        }
        for(int i=0;i<n;i++){
            have[text[i]]++;
        }
        int res=INT_MAX;
        for(auto i:need){
            if(i.second>have[i.first]) return 0;
            else{
                res=min(res,have[i.first]/i.second);
            }
        }
        return res;
    }
};