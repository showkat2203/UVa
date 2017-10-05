#include<stdio.h>
#include<math.h>
int main()
{
    long long int i,j,k,l,a,b,c;
    scanf("%lld ",&j);
    while(j--){
        scanf("%lld %lld %lld",&a,&b,&c);
        l=c*(2*a-b)/(a+b);
        printf("%lld\n",l);
    }
    return 0;
}
