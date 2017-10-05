#include <bits/stdc++.h>

using namespace std ;

int main()
{
    long long tst, n, sum ;
    scanf("%lld", &tst) ;
    while(tst--)
    {
        sum = 0 ;
        scanf("%lld", &n) ;
        while(n != 0)
        {
            sum +=  ( n % 2 ) ;
            n /= 2 ;
        }
        printf("%lld\n", sum) ;
    }
    return 0;
}
