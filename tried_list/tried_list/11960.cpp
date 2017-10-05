#include<stdio.h>
#include<math.h>

int main()
{
    long long B,D,i,j,m=0,n,t;
    scanf("%lld",&t);
    while(t--){
        D=0;
        m=0;
        n=0;
        scanf("%lld",&B);
        for(i=1;i<=B;i++){
            D=0;
            for(j=1;j<=sqrt(i);j++){
                if(i%j==0){
                    D++;
                    if(i/j!=j){
                        D++;
                    }
                }
                if(m<=D){
                    m=D;
                    n=i;
                }
            }
        }
        printf("%lld\n",n);
    }
    return 0;
}

