#include<stdio.h>
int main()
{
    long long int i,j,n,k,A[10000];
        while(scanf("%lld",&n)==1&&n>=0){
                i=0;
            if(n==0){
                printf("0\n");

            }
        else {
            while(n>0){
                A[i]=n%3;
                n=n/3;
                i++;
        }
        for(k=i-1;k>=0;k--){
            printf("%d",A[k]);
        }
        printf("\n");
        }
    }
    return 0;
}

