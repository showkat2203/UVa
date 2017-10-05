#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,k,l;
    while(scanf("%d %d",&i,&j)==2&&i>=0&&j>=0){
          l=abs(i-j);
          if(l>=50){
            l=100-l;
          }
          printf("%d\n",l);
    }
    return 0;
}
