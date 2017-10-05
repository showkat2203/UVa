#include <bits/stdc++.h>

using namespace std;

#define M 4000

int main()
{
    //freopen("10050.txt", "r", stdin );
    int a[M], i, j, n, tst, hartal_day, cnt, day ;
    scanf("%d", &tst) ;
    while( tst-- )
    {
        scanf("%d", &n) ;
        memset(a, 0, sizeof a) ;
        for( i = 6; i<=M; i += 7 )
            a[i] = 1 ;
        for( i = 7; i<=M; i += 7 )
            a[i] = 1 ;
        scanf("%d", &day) ;
        cnt  = 0 ;
        for( j = 0; j < day; j++ )
        {
            scanf("%d", &hartal_day) ;
            for( i = hartal_day; i <=n; i += hartal_day )
                if( a[i] == 0 )
                {
                    cnt++ ;
                    a[i] = 1 ;
                }
        }
        printf("%d\n", cnt ) ;

    }
    return 0 ;
}
