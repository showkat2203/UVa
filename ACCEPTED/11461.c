#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,j,k,cnt;
    while(scanf("%d %d",&a,&b)==2&&(a!=0&&b!=0)){
            cnt=0;
            j=0;
            for(i=a;i<=b;i++){
                j=sqrt(i);
                if(j*j==i){
                    cnt++;
                }
            }
        printf("%d\n",cnt);
    }
    return 0;
}

