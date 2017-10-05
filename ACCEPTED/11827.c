#include<stdio.h>
int GCD( long long int a, long long int b )
{
    int temp;
    while(a%b!= 0) {
        temp = a;
        a = b;
        b = temp % b;
    }
    return b;
}
int main(){
     long long  int a, b, x, y, t,N, gcd, lcm,i,j,G;
      while(scanf("%lld",&N)==1&&N>0){
      G=0;
        for(i=1;i<N;i++){
            for(j=i+1;j<=N;j++){
                G+=GCD(i,j);
                }
        }
        printf("%lld\n",G);
    }
     return 0;
}





