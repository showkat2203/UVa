#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int i, j, k, l, m, n, tst, cnt = 0 ;
    char plain_text[110], substitute[110] ;
    scanf("%d", &tst) ;
    getchar() ;
    getchar() ;
    while( tst-- )
    {
        if( cnt != 0 )
            puts("") ;
        cnt++ ;
        gets(plain_text) ;
        gets(substitute) ;
        l = ( strlen(plain_text)) ;
        char a[270] ;
        for( i = 0; i < 256 ; i++ )
            a[i] = i ;
        for( i = 0; i < l; i++ )
        {
            a[plain_text[i]] = substitute[i] ;
        }
        puts(substitute) ;
        puts(plain_text) ;
        while( gets(plain_text) && plain_text[0] != NULL )
        {
            l = strlen(plain_text) ;
            for( i = 0; i < l; i++ )
            {
                printf("%c", a[plain_text[i]]) ;
            }
            puts("") ;
        }
    }
    return 0 ;
}
