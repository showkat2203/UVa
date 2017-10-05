#include<stdio.h>
int main(){
      int a, b, x, y, t, gcd, lcm,i,j;
      scanf("%d",&j);
      while(j--){
          scanf("%d %d", &x, &y);
          if(y%x==0){
            printf("%d %d\n",x,y);
          }
          else
            printf("-1\n");
      }
     return 0;
}

