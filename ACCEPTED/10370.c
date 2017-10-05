#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,c,d,j,u,i;
    int A[10000];
    double res;
    scanf("%d",&j);
    while(j--){
        int sum=0,avg=0;
        double cnt=0;
        scanf("%d",&a);
        for(i=0;i<a;i++){
            scanf("%d",&A[i]);
        }
        for(i=0;i<a;i++){
            sum+=A[i];
        }
        avg=sum/a;
        for(i=0;i<a;i++){
            if(A[i]>avg){
                cnt=cnt+1;;
            }
        }
            res=(cnt*100)/a;
            printf("%.3lf%%\n",res);
  }
    return 0;
}
