#include<stdio.h>
int main()
{
    int i,j,k,l,A[1000],sum,avg,cnt=0;
    scanf("%d",&j);
    while(j--){
        scanf("%d",&k);
        sum=0;
        avg=0;
        for(i=0;i<k;i++){
            scanf("%d",&A[i]);
        }
        printf("Case %d: %d\n",++cnt,A[k/2]);
    }
    return 0;
}
