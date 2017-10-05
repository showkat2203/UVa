#include<bits/stdc++.h>

using namespace std ;

long long in_fib[110], fib[110], i, j, k, l, m, n, tst, t, cas, f, ff ;

char a[110], b[110], res[110] ;

map < long long, int > ache ;

void fibo()
{
    fib[1] = 1, fib[2] = 2 ;
    for( i = 3; i<=45; i++)
        fib[i] = fib[i-1] + fib[i-2] ;
    for( i = 1; i<=45; i++)
        ache[fib[i]] = 1 ;
}

int main()
{
    freopen("in.txt", "r", stdin) ;
    //freopen("out.txt", "w", stdout) ;
    fibo() ;
    scanf("%lld", &tst) ;
    while(tst--)
    {
        scanf("%lld", &n);
        memset(in_fib , 0, sizeof in_fib) ;
        for( i = 0; i<n; i++)
            scanf("%lld", &in_fib[i]) ;
        getchar() ;
        gets(a) ;
        l = strlen(a) ;

        for(int i = 0; i < 110; i++) res[ i ] = '*';

        k = 0 ;
        for( i = 0; i<l; i++)
        {
            if( ache[in_fib[k]] == 0 )
                k++ ;
            f = 0 ;
            if( a[i] >= 'A' && a[i] <= 'Z' )
            {
                for( j = 1; j<=45; j++ )
                {
                    if( fib[j] == in_fib[k] && k < n  )
                    {
                        res[j-1] = a[i] ;
                        f = 1;
                        break ;
                    }
                }
                k++;
            }
        }
        int len = strlen( res );
        len--;
        while(res[ len ] == '*' && len >= 0) res[ len-- ] = NULL;
        for(int i = 0; i < len; i++) if(res[ i ] == '*')res[ i ] = ' ';
        puts(res) ;
    }
    return 0 ;
}

