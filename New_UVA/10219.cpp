#include<bits/stdc++.h>

using namespace std;

typedef long long ll ;

int main()
{
    ll i, n, c, r ;
    while(scanf("%lld %lld", &n, &r) == 2 )
    {
        double res = 0.0, ans = 0.0 ;
        for( i = n - r + 1; i <= n; i++ )
            res += log10(i) ;
        for( i = 1; i <= r; i++ )
            ans += log10(i) ;
        c =  floor(res - ans) ;
        printf("%lld\n", ( c + 1 ) ) ;
    }
    return 0;
}
