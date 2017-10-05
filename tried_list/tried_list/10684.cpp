#include <bits/stdc++.h>


using namespace std;

int main()
{
    int a[10010], i, j, ma, res = 0, n ;
    while(scanf("%d", &n) == 1 && n)
    {
        res = 0 ;
        ma = 0;
        for(i=0; i<n; i++)
            scanf("%d", &a[i]);
        for(i=0; i<n; i++)
        {
            res = max(0, res + a[i]);
            ma = max(ma, res);
        }
        if( ma == 0 )
            puts("Losing streak.");
        else
            printf("The maximum winning streak is %d\n", ma);
    }
    return 0;
}

