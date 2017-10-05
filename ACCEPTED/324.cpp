#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define row 1000
#define col 1000

using namespace std;

unsigned int fact[row][col];

void factorial();


int main()
{
    factorial();
    int n,i,j,A[100],k;

    while(scanf("%d",&j)==1&&j!=0)
    {
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,m=0,o=0,p=0;
        printf("%d! --\n",j);
        n = 0;
        while(fact[j][n]==0)
            n++;
        k = 0;
        for( i = n ; i < col ; i++)
        {
            //printf("%d",fact[j][i]);
            if(fact[j][i]==0)
                a++;
            else if(fact[j][i]==1)
                b++;
            else if(fact[j][i]==2)
                c++;
            else if(fact[j][i]==3)
                d++;
            else if(fact[j][i]==4)
                e++;
            else if(fact[j][i]==5)
                f++;
            else if(fact[j][i]==6)
                g++;
            else if(fact[j][i]==7)
                h++;
            else if(fact[j][i]==8)
                o++;
            else if(fact[j][i]==9)
                p++;
        }
        printf("   (0)%5d    (1)%5d    (2)%5d    (3)%5d    (4)%5d\n",a,b,c,d,e);
        printf("   (5)%5d    (6)%5d    (7)%5d    (8)%5d    (9)%5d\n",f,g,h,o,p);
    }
    return 0;
}

void factorial()
{
    fact[0][col - 1] = 1;
    fact[1][col - 1] = 1;
    int sum,i,j;
    for( i = 2;i<row;i++)
    {
         sum = 0;
        for( j = col - 1 ;j >0; j--)
        {
            sum = (sum + (fact[i-1][j]*i));
            fact[i][j]= sum % 10;
            sum = sum /10;

        }
        if(sum!=0)
            fact[i][j] = sum;
    }
}
