#include <bits/stdc++.h>

using namespace std ;

int main()
{
    int first, second,  third, fourth, aa, bb, cc, res ;
    while( scanf("%d %d %d %d", &first, &second,  &third, &fourth) == 4 )
    {
        if( first == 0 && second == 0 && third == 0 && fourth == 0)
            break ;
        res = 1080 ;
        if( second > first)
            aa = (40 - ( second - first )) * 9 ;
        else
            aa = ( first - second ) * 9 ;
        if( fourth > third )
            cc = (40-( fourth - third)) * 9;
        else
            cc = ( ( third - fourth) ) * 9 ;
        if( third < second )
            bb = ( 40 -  ( second - third ) ) * 9 ;
        else
            bb = ( ( third - second ) ) * 9 ;
        printf("%d\n", (res + aa + bb + cc )) ;
    }
    return 0 ;
}
