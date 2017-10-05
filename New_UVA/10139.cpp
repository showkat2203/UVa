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

ll div_cnt(ll n, ll div, ll boro )
{
    ll cnt = 0;
    while ( n >= div )
    {
        cnt += n / div ;
        n /= div ;
        if( cnt >= boro )
            break ;
    }
    return cnt ;
}

int main()
{
    //freopen("in.txt","r", stdin) ;
    seive() ;
    ll n, m, i, k, l, cnt, f, N ;
    while( scanf("%lld %lld", &m, &n) == 2 )
    {
        N = n, f = 0 ;
        for( i = 0; i < how && prime[i] * prime[i] <= n; i++  )
        {
            cnt = 0 ;
            while( n % prime[i] == 0 )
            {
                n /= prime[i] ;
                cnt++;
            }
            if( cnt != 0 )
                mp[prime[i]] = cnt ;
        }
        if( n != 1 )
            mp[n] = 1 ;
        for( it = mp.begin(); it != mp.end(); it++ )
        {
            k = div_cnt(m, it->first, it->second) ;
            if( k < it->second )
            {
                f = 1 ;
                break ;
            }
        }
        mp.clear() ;
        if( f == 1 )
            printf("%lld does not divide %lld!\n" , N, m) ;
        else
            printf("%lld divides %lld!\n" , N, m ) ;
    }
    return 0 ;
}

