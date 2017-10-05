#include <bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("10849.txt", "r", stdin);
    int a[4], i, j, tst, N, f, k ;
    scanf("%d", &tst);
    getchar();
    for(i=1; i<=tst; i++)
    {
        getchar();
        scanf("%d", &j);
        scanf("%d", &N);
        while(j--)
        {
            f = 0 ;
            for(k=0; k<4; k++)
            {
                scanf("%d", &a[k]);
                if(a[k] < 1 || a[k] > N)
                    f = 1;
            }
            if( f == 1 )
            {
                puts("no move");
                continue ;
            }
            if( a[0] == a[2] && a[1] == a[3] )
                puts("0");
            else if(abs (a[0] - a[2]) == abs (a[1] - a[3]) )
                puts("1");
            else if( ( abs (a[0] - a[2]) % 2 == 0 && abs (a[1] - a[3]) % 2 == 0) || ( abs (a[0] - a[2]) % 2 != 0 && abs (a[1] - a[3]) % 2!= 0) )
                puts("2");
            else
                puts("no move");
        }
    }
    return 0;
}

