#include<stdio.h>
int main()
{
    int A[105],i,j,k,l,cnt,n,m=0;
    scanf("%d",&k);
    while(k--){
        cnt=0;
        l=0;
        scanf("%d",&j);
        for(i=0;i<j;i++){
            scanf("%d",&A[i]);
        }
        for(i=0;i<j-1;i++){
            if(A[i]<A[i+1]){
                cnt++;
            }
            else if(A[i]>A[i+1]){
                l++;
            }
        }
        printf("Case %d: %d %d\n",++m,cnt,l);
    }
    return 0;
}

