#include<stdio.h>


int main()
{
    int a,b,n,m,cnt=0;
    while(scanf("%d %d",&n,&m)==2)
    {
        a = 0;
        b = n;
        while(n>=m)
        {
            a = a +n/m ;
            n = n/m + n%m;
        }
        printf("%d\n",a+b);
    }
    return 0;
}


