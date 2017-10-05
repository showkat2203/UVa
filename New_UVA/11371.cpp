#include <bits/stdc++.h>

using namespace std  ;

typedef long long ll ;

#define mm 16

ll n, m, s, first, second, third, fourth,  fifth, d, dd, digit ;

bool rev( char a, char b )
{
    return a > b ;
}

int main()
{
    //freopen("in.txt", "r", stdin) ;;
    ll i, j, l, k ;
    char a[mm] ;
    while(gets(a))
    {
        l = strlen(a) ;
        sort(a, a + l);
        if( a[0] == '0' )
            for( i = 1; i < l; i++ )
            {
                if( a[i] != '0' )
                {
                    a[0] = a[i] , a[i] = '0' ;
                    break ;
                }
            }
        second = atoll(a) ;
        sort( a, a + l, rev) ;
        first = atoll(a) ;
        third = first - second , fourth = 9, fifth = third / fourth ;
        printf("%lld - %lld = %lld = %lld * %lld\n", first, second, third, fourth,fifth) ;
    }
    return 0 ;
}
