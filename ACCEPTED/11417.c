#include<stdio.h>
int gcd( long long  a, long long  b )
{
   if(b==0)
        return a;
    return gcd (b,a%b);
}
int main(){
     long long  int a, b, x, y, t,N, gcd, lcm,i,j,G;
      while(scanf("%lld",&N)==1&&N>0){
        G=0;
        for(i=1;i<N;i++){
            for(j=i+1;j<=N;j++){
                G+=gcd(i,j);
                }
        }
        printf("%lld\n",G);
    }
     return 0;
}




