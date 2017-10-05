#include<stdio.h>
int main()
{
    int i,j,a,b,c,d;
    while(scanf("%d",&j)==1){
    for(i=1;i<=j;i++){
        scanf("%d %d",&a,&b);
        if(b>a||(a-b)%2!=0){
            printf("impossible\n");
        }
        else {

            c=(a-b)/2;
            d=c+b;
            printf("%d %d\n",d,c);
        }
    }
  }
    return 0;
}
