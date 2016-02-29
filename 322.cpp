class Solution {
public:
    int coinChange(vector<int>& coins, int amount){
        if(amount < 0) return -1;
        vector<int> dp(amount + 1, 0x7ffffffe);
        dp[0] = 0;
        for(int i = 0; i <= amount; i++){
            for(int j = 0; j < coins.size(); j++){
                if(i + coins[j] <= amount){
                    dp[i + coins[j]] = min(dp[i] + 1, dp[i + coins[j]]);
                }
            }
        }
        return dp[amount] == 0x7ffffffe ? -1 : dp[amount];
    }
};
