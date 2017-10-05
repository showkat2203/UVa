#include<stdio.h>
int main()
{
    long long int n,k;
    while(scanf("%lld",&n)==1){
        if(n>=0)
            printf("%lld\n",((n*n+n+2)/2));
           if(n<0)
                break ;
    }
    return 0;
}
