#include <bits/stdc++.h>

using namespace std ;

int main()
{
    //freopen("661.txt", "r", stdin) ;
    int a[30], i, j, k, l , m, n , c, cap[100010], tr[100010], sum, ma, cas = 0, f ;
    while( scanf("%d %d %d", &n, &m, &c) == 3)
    {
        if( n == 0 && m == 0 && c == 0)
            break ;
        sum = ma = 0, f = 0 ;
        memset(tr, 0, sizeof tr) ;
        for( i = 0; i < n; i++) scanf("%d", &a[i]);
        for( i = 0; i < m; i++)   scanf("%d", &cap[i]) ;
        for( i = 0; i < m; i++)
        {
            if( tr[cap[i]] == 0 )
            {
                sum = sum + a[cap[i]-1] ;
                tr[cap[i]] = 1 ;
                ma = max( ma, sum) ;
            }
            else
            {
                sum = sum - a[cap[i]-1] ;
                tr[cap[i]] = 0;
                ma = max( ma, sum) ;
            }
            if( sum > c )
                f = 1 ;
        }
        printf("Sequence %d\n", ++cas) ;
        if( f == 1 )
            printf("Fuse was blown.\n");
        else
            printf("Fuse was not blown.\nMaximal power consumption was %d amperes.\n", ma) ;
        puts("") ;
    }
    return 0 ;
}
