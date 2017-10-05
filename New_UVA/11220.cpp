#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int i, j, k, l, m, n, cnt = 0, tst, f = 0 ;
    char a[1010], res[110], *p ;
    scanf("%d", &tst);
    getchar() ;
    getchar() ;
    while(tst--)
    {
        if( f )
            printf("\n") ;
        printf("Case #%d:\n", ++cnt) ;
        while( gets(a) && a[0] != NULL )
        {
            p = strtok(a, " ") ;
            k = 0 ;
            while( p != NULL )
            {
                strcpy(res, p) ;
                p = strtok(NULL, " ") ;
                l = strlen(res) ;
                if( k < l )
                {
                    printf("%c", res[k]) ;
                    k++;
                }
            }
            printf("\n") ;
        }
        f = 1 ;
    }
    return 0 ;
}
