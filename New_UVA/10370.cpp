#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int a[1010], i, j, k, l, sum,  tst, avg, cnt ;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d", &k) ;
        sum = 0, cnt = 0 ;
        double res , r ;
        for( i = 0; i < k; i++)
        {
            scanf("%d", &a[i]);
            sum += a[i] ;
        }
        avg = sum / k;
        for( i = 0; i < k; i++)
            if( a[i] > avg )
                cnt++;
        res = ( double ( cnt ) / double ( k ) * 100.0 );
        printf("%.3lf%%\n", res) ;
    }
    return 0 ;
}
