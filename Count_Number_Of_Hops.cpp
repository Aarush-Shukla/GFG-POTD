   int m = 1e9 + 7;

long long countWays(int n)
{
    if (n == 1 || n==2||n==0) return n;
    
    if (n == 3) return 4;

    long long ans = 0;
    long long a = 1, b = 2, c = 4;

    for (int i = 4; i <= n; i++)
    {
        ans = (a + b + c) % m;
        a = b;
        b = c;
        c = ans;
    }

    return ans;
}
