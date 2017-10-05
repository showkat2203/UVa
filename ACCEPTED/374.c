#include<stdio.h>
int bigmod(long int B,long int P,long int M){
        if(P==0)
            return 1;
        if(P%2==0){
            int z=bigmod(B,P/2,M);
            int x=(z*z)%M;
            return x;
            }
        else
            return (B*bigmod(B,P-1,M)%M);
}
int main()
{
    long long int i,j,B,P,M,res,tst;
      while(scanf("%lld %lld %lld",&B,&P,&M)==3){
                res=bigmod(B,P,M);
                printf("%lld\n",res);
            }
    return 0;
}
