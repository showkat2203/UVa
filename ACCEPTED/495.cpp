#include<stdio.h>
#include<math.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#define ROW 10000
#define COL 10000
void do_it();

unsigned int bord[ROW][COL];

int main()
{
    do_it();
    int num,n,i,j;
    while(scanf("%d",&num) == 1)
    {
        n = 0;
        if(num==0)
        {
            printf("The Fibonacci number for 0 is 0\n");
        }
        else {
            printf("The Fibonacci number for %d is ",num);
            while(bord[num][n] == 0)
                n++;
                for(i = n ; i < COL ; i++)
                {
                    printf("%d",bord[num][i]);
                }
            printf("\n");
        }
    }
    return 0;

}

void do_it()
{
    int i,j,sum;
    bord[0][COL - 1] = 0;
    bord[1][COL - 1] = 1;
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
}


