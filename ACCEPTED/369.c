#include<stdio.h>
double fact(int n)
{
    int i; double f=1;
    for(i=2;i<=n;i++){
        f = f*i;
    }
    return f;
}

int main()
{
    double c,n,m,res1,res2,res3;
    while(scanf("%lf %lf",&n,&m)==2){
            if(n==0&&m==0)
            break;
    else
        res1=fact(n);
        res2=fact(n-m);
        res3=fact(m);
        c=res1/(res2*res3);
        printf("%.0lf things taken %.0lf at a time is %.0lf exactly.\n",n,m,c);
    }
    return 0;
}

//#include<iostream>
//#include<stdio.h>
//using namespace std;
//long long ncr[102][102];
//int main(){
//    int n,m;
//    for(int i=0;i<=100;i++){
//        ncr[i][0]=1;
//        for(int j=1;j<=i;j++){
//            ncr[i][j]=ncr[i-1][j]+ncr[i-1][j-1];
//        }
//    }
//    while(scanf("%d%d",&n,&m) && (n||m)){
//        printf("%d things taken %d at a time is %lld exactly.\n",n,m,ncr[n][m]);
//    }
//    return 0;
//}
