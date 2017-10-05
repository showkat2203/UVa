#include <bits/stdc++.h>

using namespace std;

int main()
{
    double H, M, res , i;
    while(scanf("%lf:%lf",&H, &M) == 2)
    {
        if(H == 0.00 && M == 0.00 )
            break;
        res = abs( 0.5 * (60.0 * H - 11.0 * M) );
        if( res > 180.0 && res <= 360.0)
            res = 360.0 - res;
        printf("%0.3lf\n",res);
    }
    return 0;
}

