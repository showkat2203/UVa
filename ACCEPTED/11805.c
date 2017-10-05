#include<stdio.h>
int main()
{
    int a,i,j,N,K,P;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        scanf("%d %d %d",&N,&K,&P);
        a=K+P;
        while(a>N){
            a=a-N;
        }
        printf("Case %d: %d\n",i,a);
    }
    return 0;
}
