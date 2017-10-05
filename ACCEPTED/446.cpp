#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int i,j,k,l,n,m,o,p;
    char c;
    scanf("%d",&j);
    while(j--)
    {
        scanf("%X %c %X",&n,&c,&m);
        o = 0;
        if(c=='+')
            l = n+m;
        else
            l = n-m;
        for(i=12;i>=0;i--)
        {
            k = n >> i;
            if(k&1)
                printf("1");
            else
                printf("0");
        }
        printf(" %c ",c);
        for(i=12;i>=0;i--)
        {
            k = m >> i;
            if(k&1)
                printf("1");
            else
                printf("0");
        }
        if(o==0)
            printf(" = %d\n",l);
        else
            printf("\n");
    }
    return 0;
}

