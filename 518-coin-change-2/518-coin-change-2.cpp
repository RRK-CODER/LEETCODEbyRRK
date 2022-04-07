class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        int dp[amount+1][n+1];
        for(int i=0; i<=n ; i++)
        {
            dp[0][i]=1;
        }
         for(int i=0; i<=amount ; i++)
        {
            dp[i][0]=0;
        }
        for(int i=1; i<=amount; i++)
        {
            for(int j=1; j<=n ; j++)
            {
                dp[i][j]=dp[i][j-1];
                
                    if(coins[j-1]<=i)
                        dp[i][j]+=dp[i-coins[j-1]][j];
                        
            }
            }
        return dp[amount][n];
        
    }
};