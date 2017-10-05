#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int num,n,i,j;
    while(scanf("%d",&num) == 1)
    {
        if(num<0)
        {
            if(num%2==0)
                printf("Underflow!\n");

            else
                 printf("Overflow!\n");
        }
        else if(num>-1&&num<8)
            printf("Underflow!\n");
        else if(num==8)
            printf("40320\n");
        else if(num==9)
            printf("362880\n");
        else if(num==10)
            printf("3628800\n");
        else if(num==11)
            printf("39916800\n");
        else if(num==12)
            printf("479001600\n");
        else if(num==13)
            printf("6227020800\n");
        else
            printf("Overflow!\n");
    }
    return 0;
}



