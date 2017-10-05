#include<stdio.h>
#include<stdlib.h>
int main()
{
    int A[10000],i,j,k,ans,cnt=0;
    scanf("%d",&j);
    while(j--){
        ans=0;
        scanf("%d",&k);
        for(i=0;i<k;i++){
            scanf("%d",&A[i]);
        }
        for(i=0;i<k;i++){
            if(A[i]>ans){
                ans=A[i];
            }
        }
        printf("Case %d: %d\n",++cnt,ans);

    }
    return 0;
}
