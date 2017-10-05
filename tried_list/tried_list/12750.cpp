#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, tst, i, j, k, win, f, cnt ;
    char a[550] ;
    scanf("%d", &tst);
    for(i=1; i<=tst; i++)
    {
        scanf("%d", &n) ;
        win = cnt = f = 0 ;
        for(j=0; j<n; j++)
            scanf(" %c", &a[j]);
        a[j] = '\0' ;
        for(j=0; j<n; j++)
        {
            if( a[j] == 'W' )
                cnt = 0 ;
            else
            {
                cnt++;
                if(cnt >= 3)
                    f = 1 ;
            }
            win++ ;
            if(f == 1 )
                break ;
        }
        if( f == 0 )
            printf("Case %d: Yay! Mighty Rafa persists!\n", i);
        else
            printf("Case %d: %d\n", i, win);
    }
    return 0 ;
}
