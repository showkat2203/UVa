#include <bits/stdc++.h>

using namespace std;

int main()
{
    double h, u, d, f, res ;
    int cnt ;
    while(scanf("%lf %lf %lf %lf", &h, &u,  &d, &f) == 4)
    {
        if(h == 0)
            break;
        cnt = 0 ;
        res = 0.0 ;
        f = ( f * u ) / 100 ;
        while( true )
        {
            cnt++ ;
            if( u > 0 )
                res += u ;
            u = u - f;
            if( res > h )
                break ;
            res -=  d ;
            if(res < 0 )
                break ;
        }
        if( res >= 0 )
            printf("success on day %d\n", cnt);
        else
            printf("failure on day %d\n", cnt);
    }
    return 0;
}
