#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3000
#define COL 3000
void do_it();

unsigned int bord[ROW][COL];

int main()
{
    do_it();
    int num,n,i,j,tst,k,m,a;
    scanf("%d",&tst);
    while(tst--)
    {
        scanf("%d %d",&m,&k);
        n = 0;
        while(bord[k][n] == 0)
            n++;
        while(1)
        {
            while(num!=0)
            {
                a = 0;
                j = 1;
                n = pow(m,j);
                for(i = n ; i < COL ; i++)
                {
                    a = a * 10 ;
                    a = a % n;
                }
                j++;
            }
        }
        for(i = n ; i < COL ; i++)
        {
            printf("%d",bord[k][i]);
        }
        printf("\n");
    }
    return 0;
}

void do_it()
{
    int i,j,sum;
    bord[0][COL - 1] = 1;
    bord[1][COL - 1] = 1;
    for( i = 2 ; i < ROW ; i++)
    {
        sum = 0;
        for(j = COL - 1 ; j > 0 ; j--)
        {
            sum = sum + (bord[i - 1][j] * i);
            bord[i][j] =  sum % 10;
            sum = sum / 10;
        }
        if(sum != 0 )
            bord[i][j] = sum ;
    }
}


