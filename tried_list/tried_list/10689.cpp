#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define ROW 1000
#define COL 1000

unsigned int bord[ROW][COL];

unsigned int B[COL];
int C[COL];

long long  num, n, i, j, tst, a, b, m, sum, k ;

int main()
{
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%lld %lld %lld %lld",&a,&b,&num,&m);
        bord[0][COL - 1] = a;
        bord[1][COL - 1] = b;
        for( i = 2 ; i < ROW ; i++)
        {
            sum = 0;
            for(j = COL - 1 ; j > 0 ; j--)
            {
                sum = sum + (bord[i - 1][j] + bord[i - 2][j]);
                bord[i][j] =  sum % 10;
                sum = sum / 10;
            }
            if(sum != 0 )
                bord[i][j] = sum ;
        }
        n=0;
        int ans = 0 ;
        for(j = COL-m; j <COL; j++ )    ans = ans*10 + bord[num][j] ;
        printf("%d\n", ans) ;
    }
    return 0;
}


