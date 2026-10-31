class Solution {
public:
    int m, n;
    int LEFT = 0;
    int UP = 1;
    int mod = 1e9 + 7;

    int dp[501][501][2];

    int solve(vector<vector<int>>& grid, int i, int j, int came) {
        if (i >= m || j >= n) return 0;

        if (i == m - 1 && j == n - 1) return 1;

        if (dp[i][j][came] != -1)
            return dp[i][j][came];

        if (grid[i][j] == 1) {
            if (came == LEFT)
                return dp[i][j][came] = solve(grid, i + 1, j, UP);

            else
                return dp[i][j][came] = solve(grid, i, j + 1, LEFT);
        }

        int res = 0;

        res = (res + solve(grid, i, j + 1, LEFT)) % mod;
        res = (res + solve(grid, i + 1, j, UP)) % mod;

        return dp[i][j][came] = res;
    }

    int uniquePaths(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();

        memset(dp, -1, sizeof(dp));

        return solve(grid, 0, 0, LEFT);
    }
};