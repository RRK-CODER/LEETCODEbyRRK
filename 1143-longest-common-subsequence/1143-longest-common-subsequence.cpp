class Solution {
public:
       /* int f(int i,int j,vector<vector<int>> &dp,string s1,string s2)
    {
        if(i<0 or j<0) return 0;
        
        if(dp[i][j] != -1) return dp[i][j];
        
        if(s1[i] == s2[j])
            return 1+f(i-1,j-1,dp,s1,s2);
        
        return  dp[i][j] = 0 + max(f(i-1,j,dp,s1,s2),f(i,j-1,dp,s1,s2)); 
    }*/
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.length();
        int m = text2.length();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
        for(int i = 0;i<=m;i++) dp[0][i] = 0;
        for(int i = 0;i<=n;i++) dp[i][0] = 0;
        
        for(int i = 1;i<=n ;i++)
        {
            for(int j = 1;j<=m;j++)
            {
                if(text1[i-1] == text2[j-1])
                {
                    dp[i][j] = 1 + dp[i-1][j-1];
                }
                else
                {
                    dp[i][j] = 0 + max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n][m];
    }
};