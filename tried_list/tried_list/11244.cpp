#include <bits/stdc++.h>

using namespace std;

int main()
{
    char stars[110][110] ;
    int i, j, k, l, f, r, c, cell, CELL, cnt = 0 ;
    int dir[] =  {-1, 0,   1, -1, 1, -1, 0, 1};
    int dir2[] = {-1, -1, -1,  0, 0,  1, 1, 1};
    while( scanf("%d %d",  &r, &c) == 2 && r && c)
    {
        cnt = 0 ;
        for(i=0; i<r; i++)
            for(j=0; j<c; j++)  scanf(" %c", &stars[i][j]) ;
        for(i=0; i<r; i++)
        {
            for(j=0; j<c; j++)
            {
                f = 0 ;
                if(stars[i][j] == '*')
                {
                    for(k = 0; k<8; k++)
                    {
                        cell = i + dir[k] , CELL = j + dir2[k] ;
                        //printf("%d %d\n", cell, CELL) ;
                        if(cell >=0 && cell < r && CELL >=0 && CELL < c &&   stars[cell][CELL] == '*')
                        {
                            f = 1 ;
                            break ;
                        }
                    }
                    if(f == 0)
                        cnt++ ;
                }
            }
        }
        printf("%d\n", cnt) ;
    }
    return 0 ;
}
