#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

void print_ans(ll sum, ll base )
{
    int ans[15], k, i ;
    if( base == 10 )
        printf("%lld\n", sum) ;
    else
    {
        k = 0 ;
        while( sum != 0 )
        {
            ans[k++] = ( sum % base) ;
            sum /= base ;

        }
        if( k == 0 )
            printf("0\n") ;
        else
        {
            for( i = k - 1; i >= 0; i--)
                printf("%d", ans[i]) ;
            puts("") ;
        }
    }
}

int main()
{
    //freopen("10551.txt", "r", stdin) ;
    ll a, base, n, mod, i, sum, j, k, l, res ;
    char num[1010], M[15], *p ;
    while ( scanf("%lld %s %s", &base, &num, &M) == 3 )
    {
        if( base == 0 )
            break ;
        sum = 0 ;
        mod = strtol( M, &p, base) ;
        l = strlen(num);
        for( i = 0; i<l; i++ )
            sum = ( sum * base + ( (num[i] - '0') ) ) % mod ;
        print_ans(sum, base) ;
    }
    return 0 ;
}
