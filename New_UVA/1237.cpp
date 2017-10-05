#include <bits/stdc++.h>

using namespace std ;

int main()
{
    //freopen("1237.txt", "r", stdin) ;
    int tst, i, j, k, l, a[10010], b[10010], n, m ;
    char A[10010][45], ans[10010][45] ;
    scanf("%d", &tst);
    for(int tt = 0; tt <tst; tt++)
    {
        if( tt != 0 )
            printf("\n") ;
        scanf("%d", &k) ;
        getchar() ;
        i = 0 ;
        while(k--)
        {
            scanf("%s %d %d", &A[i], &a[i], &b[i]) ;
            i++;
        }
        scanf("%d", &j) ;
        while(j--)
        {
            scanf("%d", &l) ;
            n = 0, m = 0 ;
            for(  m = 0; m<i; m++)
            {
                if( l >= a[m] && l <= b[m] )
                {
                    n++;
                    strcpy(ans[0], A[m]) ;
                }
            }
            if( n == 1 )
                printf("%s\n", ans[0]) ;
            else
                printf("UNDETERMINED\n") ;
        }
    }
    return 0 ;
}
