#include<stdio.h>
int main()
{
    int n,A[105],i,j,cnt=0,sum,avg,res=0;
    while(scanf("%d",&n)==1&&n>0){
            avg=0;
            sum=0;
            res=0;
            j=0;
        for(i=0;i<n;i++){
            scanf("%d",&A[i]);
            }
        for(i=0;i<n;i++){
            sum+=A[i];
        }
        avg=sum/n;
        for(i=0;i<n;i++){
            if(A[i]>avg){
                res=res+(A[i]-avg);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",++cnt,res);
     }
    return 0;
}
