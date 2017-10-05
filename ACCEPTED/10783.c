#include<stdio.h>
int main()
{
    int a,b,i,j,c,cnt=0,sum;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
        scanf("%d %d",&a,&b);
        if(a%2==0){
            a=a+1;
        }
        sum=0;
        for(c=a;c<=b;c=c+2){
            sum=sum+c;
        }
        printf("Case %d: %d\n",++cnt,sum);
        }
    return 0;
}
