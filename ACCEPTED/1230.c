#include<stdio.h>
    long long int bigmod(long long int B,long long int P,long long int M){
        if(P==0){
            return 1;
            }
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
    while(scanf("%lld",&tst)==1){
            if(tst==0)
            break;
    else{
    for(i=0;i<tst;i++){
        scanf("%lld %lld %lld",&B,&P,&M);
                res=bigmod(B,P,M);
                printf("%lld\n",res);
            }
        }
    }
    return 0;
}

