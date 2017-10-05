#include<stdio.h>
#include<cstring>
#include<math.h>

using namespace std;

 int main()
 {
     long long a,b,c,d,i,j,k,n;
     while(scanf("%lld",&n)==1){
        if(n==0)
            break;
        printf("%lld = ",n);
        if(n<0){
            printf("-1 x ");
            n=n*(-1);
        }
        for(i=2;i<=sqrt(n);i++){
            while(n%i==0){
                printf("%lld",i);
                n=n/i;
                if(n>1){
                    printf(" x ");
                }
            }
        }
        if(n>1)
            printf("%lld",n);
        printf("\n");
     }
     return 0;
 }



