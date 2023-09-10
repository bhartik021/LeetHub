class Solution {
public:
        
    const int mod = 1e9+7;

    long long solve(int p, int n)
    {
        if(p==0)
            return 1;
        return ((long long)p * (((n-1) * solve(p-1, n-2)) % mod)) % mod;
    }
    
    int countOrders(int n) {
    return (int)solve(n, 2*n);
        
    }
};