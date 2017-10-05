#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int n, i, j, k, a[10], b[10] ;
    while(scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]) == 5 )
    {
        scanf("%d %d %d %d %d", &b[0], &b[1], &b[2], &b[3], &b[4]) ;
        bool fl = false ;
        for( i = 0; i < 5; i++ )
        {
            if( ( a[i] == 0 && b[i] == 0 ) || ( a[i] == 1 && b[i] == 1 ) )
            {
                fl = true ;
                break ;
            }
        }
        if( fl )
            puts("N") ;
        else
            puts("Y") ;
    }
    return 0 ;
}
