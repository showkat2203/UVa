#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k;
    while(scanf("%d",&j)==1&&j>0){
        int sum=0;
        for(i=1;i<=j;i++){
            sum+=i*i;
        }
        printf("%d\n",sum);
    }
    return 0;
}

