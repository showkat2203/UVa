#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>


using namespace std;


int main()
{
    int a,b,i,j,k,l,num,A[100];
    scanf("%d",&j);
    while(j--)
    {
        scanf("%d",&num);
        memset(A,0,sizeof A);
        for(i=1;i<=num;i++)
        {
            b=i;
            while(b>0)
            {
                A[b%10]++;
                b=b/10;
            }
        }
        for(i=0;i<=9;i++)
        {
            if(i==0)
                printf("%d",A[i]);
            else
                printf(" %d",A[i]);
        }
        printf("\n");
    }
    return 0;
}
