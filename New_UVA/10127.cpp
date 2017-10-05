#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

ll i, j, k, l, n ;

int main()
{
    ll b[10015], s, sum ;
    for( i = 0; i < 10010 ; i++)
        b[i] = 1 ;
    while ( scanf("%lld", &n) == 1 )
    {
        s = 0 ;
        for( i = 0; i<10010; i++)
        {
            s = ( s * 10 ) + b[i] ;
            s = s % n ;
            if( s == 0 )
            {
                printf("%lld\n",i + 1) ;
                break ;
            }
        }
    }
    return 0;
}

