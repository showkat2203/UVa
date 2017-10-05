#include<stdio.h>
int main()
{
    long long a,b,c,d,i,j;
    while(scanf("%lld",&j)==1){
        a = 0;
        b = 1;
        c = 0;
        i=1;
        d = 1;
        while(i<j)
        {
            c = d - 1 ;
            d = ( c + d )  ;
            i++;
        }
        printf("%lld %lld\n",c,d);
    }
    return 0;
}


