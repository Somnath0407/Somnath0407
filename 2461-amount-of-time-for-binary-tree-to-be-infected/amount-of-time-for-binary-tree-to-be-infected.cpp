class Solution {
public:
    unordered_map<int, vector<int>> adj;
    unordered_set<int> visited;

    void buildGraph(TreeNode* node) {
        if (!node) return;
        if (node->left) {
            adj[node->val].push_back(node->left->val);
            adj[node->left->val].push_back(node->val);
            buildGraph(node->left);
        }
        if (node->right) {
            adj[node->val].push_back(node->right->val);
            adj[node->right->val].push_back(node->val);
            buildGraph(node->right);
        }
    }

    int amountOfTime(TreeNode* root, int start) {
        buildGraph(root);

        queue<int> q;
        q.push(start);
        visited.insert(start);
        int time = -1;

        while (!q.empty()) {
            int size = q.size();
            time++;
            for (int i = 0; i < size; ++i) {
                int node = q.front(); q.pop();
                for (int neighbor : adj[node]) {
                    if (!visited.count(neighbor)) {
                        visited.insert(neighbor);
                        q.push(neighbor);
                    }
                }
            }
        }

        return time;
    }
};
