#include<stdio.h>
int main()
{
    int A[105],i,j,n,p,q,cs=0,cnt,sum;
    scanf("%d",&j);
    while(j--){
        scanf("%d %d %d",&n,&p,&q);
        cnt=0;
        sum=0;
        for(i=1;i<=n;i++){
            scanf("%d",&A[i]);
            }
        for(i=1;i<=n&&i<=p;i++){
            sum=sum+A[i];
            if(sum>q){
                    break;
            }
            cnt++;
        }
        printf("Case %d: %d\n",++cs,cnt);
    }
    return 0;
}
