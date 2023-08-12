 int ans(int n,vector<int>&dp){
        if(n<=2){
            return 1;
        }
        if(dp[n]!=-1){
            return dp[n];
        }
        dp[n]=(ans(n-1,dp)%1000000007+ans(n-2,dp)%1000000007)%1000000007;
        return dp[n];
    }
    int nthFibonacci(int n){
        // code here
        int s=0;
        vector<int>dp(n+1,-1);
        s=ans(n,dp);
        return s;
    }
