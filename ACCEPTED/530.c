#include<stdio.h>
int main()
{
    long long  n,c,r,res,m,i;
    while(scanf("%lld %lld",&n,&r)==2){
        if(n==0&&r==0){
            break;
        }
        res=1;
        if(r>n/2){
            r=n-r;
        }
            for(i=1;i<=r;i++){
                res=res*(n-r+i)/i;
            }
         printf("%lld\n",res);
    }
    return 0;
}
