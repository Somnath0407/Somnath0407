class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>k;
        string ans="";
        for(int i=0;i<s.size();i++){
           if(k.empty()){
                k.push(s[i]);
                continue;
           }
           if(s[i]==k.top()){
            k.pop();
            continue;
           }
           else{
            k.push(s[i]);
           }
        }
        while(!k.empty()){
            ans.push_back(k.top());
            k.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};