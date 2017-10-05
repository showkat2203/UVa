#include <bits/stdc++.h>

using namespace std;

int main()
{
    int goals[110][110] ;
    int i, j, k, l, f, r, c, cell, CELL, cnt = 0 ;
    while( scanf("%d %d",  &r, &c) == 2 && r && c)
    {
        cnt = 0 ;
        for(i=0; i<r; i++)
            for(j=0; j<c; j++)  scanf("%d", &goals[i][j]) ;
        for(i=0; i<r; i++)
        {
            f = 0 ;
            for(j=0; j<c; j++)
            {
                if(goals[i][j] == 0)
                {
                    f = 1 ;
                    break ;
                }
            }
            if(f == 0)
                cnt++ ;
        }
        printf("%d\n", cnt) ;
    }
    return 0 ;
}

