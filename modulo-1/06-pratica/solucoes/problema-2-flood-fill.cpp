// Solução: LeetCode 733 — Flood Fill
// https://leetcode.com/problems/flood-fill/

#include <vector>
using namespace std;

class Solution {
    void dfs(vector<vector<int>>& img, int r, int c, int corOrig, int corNova) {
        if (r < 0 || r >= (int)img.size() || c < 0 || c >= (int)img[0].size())
            return;
        if (img[r][c] != corOrig) return;
        img[r][c] = corNova;
        dfs(img, r - 1, c, corOrig, corNova);
        dfs(img, r + 1, c, corOrig, corNova);
        dfs(img, r, c - 1, corOrig, corNova);
        dfs(img, r, c + 1, corOrig, corNova);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int orig = image[sr][sc];
        if (orig != color)
            dfs(image, sr, sc, orig, color);
        return image;
    }
};
