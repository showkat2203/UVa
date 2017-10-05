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
    int num,n,i,j,summation;
    while(scanf("%d",&num) == 1)
    {
        n = 0;
        summation=0;
        while(bord[num][n] == 0)
            n++;
            for(i = n ; i < COL ; i++)
            {
                summation+=bord[num][i];
            }
            printf("%d\n",summation);
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



