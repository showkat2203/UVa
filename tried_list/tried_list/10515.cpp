#include<bits/stdc++.h>

typedef long long ll ;

using namespace std ;

ll bigmod(ll B,ll P,ll M)
{
        if(P==0)
            return 1;
        if(P%2==0)
        {
            ll z = bigmod(B,P/2,M);
            ll x = ( ( z %  M ) * (z % M )) % M ;
            return x;
        }
        else
            return ( ( B % M ) * ( bigmod( B, P-1, M ) % M ) % M ) ;
}
int main()
{
    ll i, j, B, P, M, res, tst ;
    while( scanf("%lld %lld",&B,&P) == 2 )
    {
            M = 10 ;
            res=bigmod(B,P,M);
            printf("%lld\n",res);
    }
    return 0;
}


