#include<bits/stdc++.h>
class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        double dp[102][102] = {0};
        dp[0][0] = (double)poured;
        for(int r=0; r<=query_row; r++) {
            for(int c=0; c<=r; c++) {
                double q = (dp[r][c] - 1.0) / 2.0;
                if(q>0) {
                    dp[r+1][c] += q;
                    dp[r+1][c+1] += q;
                }
            }
        }
        return min(1.0, dp[query_row][query_glass]);
    }
};
