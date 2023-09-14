int perfectSum(int arr[], int n, int sum)
	{
         int t[n+1][sum+1];
        memset(t,0,sizeof(t));
        int cnt=1;
        t[0][0]=1;
    
        int mod= (int)1e9+7;
        for(int i=1;i<n+1;++i)
        {
            for(int j=0;j<sum+1;++j)
            {
                if(arr[i-1]<=j)
                {
                    t[i][j]=(t[i-1][j]+t[i-1][j-arr[i-1]])%mod;
                }
                else if(arr[i-1]>j)
                {
                    t[i][j]=t[i-1][j];
                }
            }
        }
        return t[n][sum];
	}
