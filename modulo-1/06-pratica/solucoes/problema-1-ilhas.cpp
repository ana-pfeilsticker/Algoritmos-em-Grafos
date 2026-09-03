// Solução: LeetCode 200 — Number of Islands
// https://leetcode.com/problems/number-of-islands/

#include <vector>
#include <string>
using namespace std;

class Solution {
    int dr[4] = {-1, 1, 0, 0};
    int dc[4] = {0, 0, -1, 1};

    void dfs(vector<vector<char>>& grid, int r, int c) {
        int rows = grid.size(), cols = grid[0].size();
        if (r < 0 || r >= rows || c < 0 || c >= cols || grid[r][c] != '1')
            return;
        grid[r][c] = '0';  // marca como visitado
        for (int k = 0; k < 4; k++)
            dfs(grid, r + dr[k], c + dc[k]);
    }

public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        for (int i = 0; i < (int)grid.size(); i++)
            for (int j = 0; j < (int)grid[0].size(); j++)
                if (grid[i][j] == '1') {
                    dfs(grid, i, j);
                    count++;
                }
        return count;
    }
};
