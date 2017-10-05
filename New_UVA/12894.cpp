#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int x1, y1, x3, y3, cx, cy, r, tst, area, res, f, length, width  ;
    scanf("%d", &tst);
    while(tst--)
    {
        scanf("%d %d %d %d %d %d %d", &x1, &y1, &x3, &y3, &cx, &cy, &r) ;
        length = x3 - x1  ;
        width  = y3 - y1 ;
        if( ( length * 3 ) == ( width * 5 ) && ( ( cx - x1 ) * 20 ) == ( length * 9 ) && ( r * 5 == length ) && ( ( ( y3 - cy )  * 2 ) == width ) )
            puts("YES") ;
        else
            puts("NO") ;
    }
    return 0 ;
}
