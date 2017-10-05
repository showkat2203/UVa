#include <bits/stdc++.h>

using namespace std ;

typedef long long ll ;

#define sz 10000000

bool status[sz] ;

map < ll, ll > mp ;
map < ll, ll > :: iterator it ;

ll prime[1000010], how = 0 ;

void seive()
{
    ll i, j ;
    prime[how++] = 2 ;
    for( i = 3; i <= sqrt(sz) ; i += 2 )
        if( status[i] == false )
            for( j = 3 * i; j <= sz; j += 2 * i )
                status[j] = true;

    for( i = 3; i <= sz; i += 2 )
        if( status[i] == false )
            prime[how++] = i ;
}

ll div_cnt(ll n, ll div )
{
    ll cnt = 0;
    while ( n >= div )
    {
        cnt += n / div ;
        n /= div ;
    }
    return cnt ;
}

int main()
{
    //freopen("in.txt","r", stdin) ;
    seive() ;
    ll n, m, i, k, l, cnt, f, N, tst, kase = 0 ;
    scanf("%lld", &tst) ;
    while( tst-- )
    {
        scanf("%lld %lld", &m, &n) ;
        N = n, f = 0 ;
        for( i = 0; i < how && prime[i] * prime[i] <= m; i++  )
        {
            cnt = 0 ;
            while( m % prime[i] == 0 )
            {
                m /= prime[i] ;
                cnt++;
            }
            if( cnt != 0 )
                mp[prime[i]] = cnt ;
        }
        if( m != 1 )
            mp[m] = 1 ;
        for( it = mp.begin(); it != mp.end(); it++ )
        {
            k = div_cnt(n, it->first) ;
            if( k >= it->second )
            {
                mp[it->first] = k / mp[it->first] ;
            }
            if( k < it->second )
            {
                f = 1 ;
                break ;
            }
        }
        printf("Case %lld:\n", ++kase) ;
        if( f == 1 )
            printf("Impossible to divide\n") ;
        else
        {
            ll mini = 10001010100 ;
            for( it = mp.begin(); it != mp.end(); it++ )
            {
                if( it->second < mini )
                    mini = it->second ;
            }
            printf("%lld\n", mini) ;
        }
        mp.clear() ;
    }
    return 0 ;
}

