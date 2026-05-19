class Solution {
public:
    struct cmp{
        bool operator()(pair<int,vector<int>>& a,pair<int,vector<int>>& b){
            return a.first < b.first;
        }
    };
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,vector<int>>,
                       vector<pair<int,vector<int>>>,
                       cmp> pq;

        for(auto p : points){
            int x = p[0];
            int y = p[1];
            int dist = x*x + y*y;
            pq.push({dist, p});
            if(pq.size() > k){
                pq.pop();
            }
        }
        vector<vector<int>> res;
        while(!pq.empty()){

            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};