class Solution {
public:
struct cmp{
    bool operator()(pair<int,string>&a,pair<int,string>&b){
        if(a.first!=b.first)
            return a.first>b.first;
        return a.second<b.second;
    }
};
    vector<string> topKFrequent(vector<string>& words, int k) {
        int n=words.size();
        priority_queue<pair<int,string>,vector<pair<int,string>>,cmp>pq;
        unordered_map<string,int>f;
        for(int i=0;i<n;i++){
            f[words[i]]++;
        }
        for(auto i:f){
            string element=i.first;
            int freq=i.second;
            pair<int,string>curr={freq,element};
            if(pq.size()<k){
                pq.push(curr);
                continue;
            }
            else{
                if(curr.first<pq.top().first) continue;
                 else if(curr.first==pq.top().first &&
                        curr.second>pq.top().second)
                    continue;
                else{
                    pq.pop();
                    pq.push(curr);
                }
            }
        }
        vector<string>res;
        while(!pq.empty()){
            res.push_back(pq.top().second);
            pq.pop();
        }
        reverse(res.begin(), res.end());
        return res;

    }
};