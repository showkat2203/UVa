#include<stdio.h>
#include<math.h>

int main()
{
    long long int A, B, C, D, i,j,k,l,m=0,n,t;
    scanf("%lld",&t);
    while(t--){
        D=0;
        m=0;
        n=0;
        scanf("%lld %lld",&A,&B);
        for(i=A;i<=B;i++){
            D=0;
            for(j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    D++;
                    if(i/j!=j){
                        D++;
                    }
                }
                if(m<D){
                    m=D;
                    n=i;
                }
            }
        }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",A,B,n,m);
    }
    return 0;
}
