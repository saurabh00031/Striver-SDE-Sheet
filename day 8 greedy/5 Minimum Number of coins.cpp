
	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    vector<int> dp(V + 1, INT_MAX);
	    sort(coins, coins + M);
	    dp[0] = 0;
	    for(int i = 1; i <= V; i++){
	        for(int j = 0; j < M; j++){
	            if(coins[j] <= i){
	                if(dp[i - coins[j]] != INT_MAX){
	                    dp[i] = min(dp[i - coins[j]] + 1, dp[i]);
	                }
	            }
	        }
	    }
	    return dp[V] == INT_MAX ? -1 : dp[V];
	} 
	  
};