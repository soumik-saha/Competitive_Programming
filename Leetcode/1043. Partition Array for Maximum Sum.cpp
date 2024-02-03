class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int dp[arr.size()];
        memset(dp, -1, sizeof(dp));

        return solve(arr, k, dp, 0);
    }
private:
    int solve(vector<int>& arr, int k, int dp[], int start) {
        int n = arr.size();

        if(start>=n)    return 0;

        if(dp[start]!=-1)   return dp[start];

        int currMax = 0, ans = 0;
        int end = min(n, start+k);
        for(int i=start; i<end; i++) {
            currMax = max(currMax, arr[i]);
            ans = max(ans, currMax*(i-start+1)+solve(arr, k, dp, i+1));
        }

        return dp[start] = ans;
    }
};
