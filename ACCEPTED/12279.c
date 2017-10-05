#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int i,j,n,cnt,c=0,num,a,b;
    int A[30000];
    while(scanf("%d",&j)==1&&j>0){
        int res=0;
        cnt=0;
        num=0;
        for(i=0;i<j;i++){
            scanf("%d",&A[i]);
        }
        for(i=0;i<j;i++){
            if(A[i]>0){
                cnt++;
            }
        }
        num=j-cnt;
        res=cnt-num;
        printf("Case %d: %d\n",++c,res);
    }
    return 0;
}


