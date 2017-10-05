#include <bits/stdc++.h>

using namespace std ;

#define M 1000010
#define MAX 10000000001

typedef long long ll ;

bool seive[1010100] ;
bool MAIN[1010100] ;
ll prime[1010100], new_prime_index = 0  ;

ll new_prime[M] ;

map < pair < ll, ll > , ll > mp ;
map < pair < ll, ll > , ll > :: iterator it ;

void is_prime()
{
    ll n = sqrt(M);
    ll k = 0, i, j ;
    prime[k++] = 2;
    for( i = 3 ; i < n ; i = i + 2 )
        if(seive[i] == false)
            for( j = i + i ; j < M ; j = j +  i)
                seive[j] = true;
    for( i = 3 ; i < M ; i = i + 2 )
        if(seive[i] == false) prime[k++] = i;
}

void segmented_seive(ll a, ll b)
{
    memset(MAIN, false, sizeof MAIN) ;
    new_prime_index = 0 ;
    ll i = 1, j, k, l, m, n, p , x ;
    if( a < 1 && b > 1 )
        new_prime[new_prime_index++] = 1 ;
    if( a <= 2 &&  b >= 2)
    {
        //printf("2\n" ) ;
        new_prime[new_prime_index++] = 2 ;
    }
    for( i = 1; ( prime[i] * prime[i] ) <= b ; i++ )
    {
        x = a / prime[i] ;
        if( x * prime[i] != a )
            x = ( x * prime[i] + prime[i] ) ;
        else
            x = a ;
        //printf("%lld\n", x) ;
        for( k = x ; k <= b; k = k + prime[i] )
            if( k != prime[i])
                MAIN[k - a] = true ;

    }
   // printf("%lld %lld\n", i - 1, prime[i-1]) ;
    for( i = 0; i <= b - a ; i++ )
        if( ( i + a ) % 2 != 0 && MAIN[i] == false && ( i + a  != 1))
        {
            //printf("%lld\n", i + a ) ;
            new_prime[new_prime_index++] = i + a ;
        }
}

int main()
{
    //freopen("prime.txt", "w", stdout) ;
    is_prime() ;
    ll n, a, b, i, k, ans[10] ;
    while( scanf("%lld %lld", &a, &b) == 2 )
    {
        segmented_seive(a, b) ;
//        for( i = 0; i < new_prime_index ; i++ )
//            printf("%lld ", new_prime[i]) ;
        for( i = 0; i < new_prime_index - 1; i++ )
        {
            k = abs(new_prime[i] - new_prime[i+1]) ;
            mp[make_pair(new_prime[i], new_prime[i+1])] = k ;
        }
        ll maxi = -21474836470, mini = 21474836470 ;
        if( mp.size() == 0 )
        {
            puts("There are no adjacent primes.") ;
            continue ;
        }
        memset(ans, 0, sizeof ans) ;
        for( it = mp.begin(); it != mp.end(); it++ )
        {
            if( it->second < mini )
            {
                mini = it->second ;
                ans[0] = it->first.first ;
                ans[1] = it->first.second ;
            }
            if( it->second > maxi )
            {
                maxi = it->second ;
                ans[2] = it->first.first ;
                ans[3] = it->first.second ;
            }

        }
//        printf("%lld %lld\n", maxi, mini) ;
        if( mini == 21474836470 || maxi ==  -21474836470 )
            puts("There are no adjacent primes.") ;
        else
            printf("%lld,%lld are closest, %lld,%lld are most distant.\n", ans[0], ans[1], ans[2], ans[3]) ;
        mp.clear() ;
        //printf("%d\n", mp.size()) ;
    }
    return 0 ;
}

