// Solução: LeetCode 994 — Rotting Oranges
// https://leetcode.com/problems/rotting-oranges/

#include <vector>
#include <queue>
using namespace std;

class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size(), cols = grid[0].size();
        queue<pair<int, int>> fila;
        int frescos = 0;

        for (int i = 0; i < rows; i++)
            for (int j = 0; j < cols; j++)
                if (grid[i][j] == 2) fila.push({i, j});
                else if (grid[i][j] == 1) frescos++;

        int minutos = 0;
        int dr[4] = {-1, 1, 0, 0}, dc[4] = {0, 0, -1, 1};

        while (!fila.empty() && frescos > 0) {
            int sz = fila.size();
            for (int s = 0; s < sz; s++) {
                auto [r, c] = fila.front(); fila.pop();
                for (int k = 0; k < 4; k++) {
                    int nr = r + dr[k], nc = c + dc[k];
                    if (nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        frescos--;
                        fila.push({nr, nc});
                    }
                }
            }
            minutos++;
        }
        return frescos == 0 ? minutos : -1;
    }
};
