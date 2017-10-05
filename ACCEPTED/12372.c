#include<stdio.h>
int main()
{
    int l,w,h,i,j,test;
    i=0;
    scanf("%d",&test);
    while(test--){
            scanf("%d %d %d",&l,&w,&h);
        if(l<=20&&w<=20&&h<=20){
            printf("Case %d: good\n",++i);
        }
        else
            printf("Case %d: bad\n",++i);
    }
    return 0;
}
