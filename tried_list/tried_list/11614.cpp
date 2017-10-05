#include <bits/stdc++.h>

using namespace std;

typedef long long ll ;

int main()
{
    freopen("in.txt","r", stdin) ;
    ll i, tst , cnt, j , m, n,  a , b ;
    scanf("%lld", &tst);
    for( j = 1 ; j <= tst ; j++)
    {
        scanf("%lld", &n);
        m = n ;
        cnt = 0 ;
        for(i = 1; i<=n; i++)
        {
            n = n - i ;
            cnt++ ;
        }
        printf("%lld: %lld\n", m, cnt );
    }
    return 0;
}



