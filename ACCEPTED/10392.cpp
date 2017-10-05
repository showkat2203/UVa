#include<stdio.h>
#include<cstring>
#include<math.h>

using namespace std;

int main()
 {
     long long a,b,c,d,i,j,k,n;
     while(scanf("%lld",&n)==1){
        if(n<0)
            break;
        for(i=2;i<=sqrt(n);i++){
            while(n%i==0){
                printf("    %lld\n",i);
                n=n/i;
            }
        }
        if(n>1)
            printf("    %lld\n",n);
        printf("\n");
     }
     return 0;
 }



