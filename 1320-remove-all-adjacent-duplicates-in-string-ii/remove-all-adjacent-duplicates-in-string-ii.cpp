class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>>st;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(st.empty()){
                st.push({c,1});
                continue;
            }
            if(st.top().first!=c){
                st.push({c,1});
                continue;
            }
            if(st.top().first==c){
                if(st.top().second<(k-1)){
                pair<char,int>p=st.top();
                st.pop();
                st.push({p.first,p.second+1});
                continue;
                }
                else{
                    st.pop();
                }
            }
            continue;
        }
        string res="";
        while(!st.empty()){
            pair<char,int>p=st.top();
            st.pop();
            while(p.second--){
                res.push_back(p.first);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};