#include <bits/stdc++.h>

using namespace std;

#define MAX 10000000

typedef long long ll ;

bool sive[MAX] ;
vector <ll> prime;
ll ans[MAX] ;
const ll INF = 100000000000009;
ll besi, tot;


void is_prime()
{
    ll n = sqrt(MAX) ;
    ll k = 0;
    prime.push_back(2);
    for( ll i = 3 ; i < n ; i = i + 2 )
        if(sive[i] == false)
            for(ll j = i * i ; j < MAX ; j += i)
                sive[j] = true;
    for(ll i = 3 ; i < MAX ; i = i + 2)
        if(sive[i] == false) prime.push_back(i) ;
}

void factor(ll num)
{
    ll n = num ;
    ll k = 0 ;
    besi = -INF;
    tot = 0;

    for(ll i = 0 ; prime[i] <= sqrt(num) ; i++)
        if(num % prime[i] == 0)
        {
            while(num % prime[i] == 0) num = num / prime[i];
            besi = max(besi, prime[i]);
            tot++;
        }

        if( num > 1 ){ besi  = max(besi, num); tot++; }

        if(n==num || tot<2) besi = -1;
        return;
}

int main()
{
    is_prime() ;
    ll n ;
    while( scanf("%lld",  &n) == 1 )
    {
        if( n < 0 )
            n = n * (-1) ;
        if(n == 0 )
            break ;
        factor(n) ;
        cout << besi << endl;
    }
    return 0 ;
}
