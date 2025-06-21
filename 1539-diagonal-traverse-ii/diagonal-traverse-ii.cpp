class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        map<int, vector<int>> diagonals;

        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums[i].size(); ++j) {
                diagonals[i + j].push_back(nums[i][j]);
            }
        }

        vector<int> result;
        for (auto& [_, vec] : diagonals) {
            // Insert in reverse to match required traversal
            result.insert(result.end(), vec.rbegin(), vec.rend());
        }

        return result;
    }
};
