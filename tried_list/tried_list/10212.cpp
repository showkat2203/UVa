#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m, p, res, ans, i ;
    //freopen("10212.txt", "r", stdin) ;
    while (scanf("%lld %lld", &n, &m) == 2)
    {
        if( m == 0 )
        {
            puts("1") ;
            continue ;
        }
        p = n - m + 1 ;
        ans = 1 ;
        for(i = n; i >= p; i--)
        {
            ans = ans * i ;
            while( ans % 10 == 0)
                ans /= 10 ;
            ans = ans % 100000000 ;
        }
        printf("%lld\n", ans % 10) ;
    }
    return 0 ;
}
