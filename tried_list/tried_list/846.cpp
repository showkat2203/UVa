#include<stdio.h>
#include<stdlib.h>
int main()
{
    int d, i, j, n, m, cnt ;
    scanf("%d",&j);
    while(j--)
    {
        scanf("%d %d", &n, &m );
        d = m - n ;
        i = 2 ;
        cnt = 2 ;
        while( d > 0 )
        {
            d = d - i ;
            cnt++;
            i++ ;
        }
        printf("%d\n",cnt);
    }
    return 0;
}

