#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,j;
    while(scanf("%lld",&n)==1){
        if(n==0){
            break;
        }
        j=sqrt(n);
        if(j*j==n){
            printf("yes\n");
        }
        else
            printf("no\n");
    }
    return 0;
}
