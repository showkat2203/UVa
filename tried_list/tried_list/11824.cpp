#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long  l, m, i, j, a[1001] , tst, sum , f , k ;
    scanf("%lld", &tst);
    while(tst--)
    {
        i = 0;
        f = 0 ;
        while( scanf("%lld", &a[i]) )
        {
            if( a[i] == 0 )
                break;
            i++;
        }
        sort(a, a + i);
        sum = 0 ;
        for(j = 0 ; j<i; j++)
        {
            sum +=  pow( a[j], i - j  ) ;
            if(sum > 5000001 / 2 )
            {
                f = 1;
                break;
            }
        }
        if( f == 1 )
            puts("Too expensive");
        else
            printf("%lld\n", sum * 2 );
    }
    return 0;
}

