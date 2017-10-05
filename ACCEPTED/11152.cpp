#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
    double a,b,c,d,s,r,R,RED,VIO,TRI,CIR,YEL;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3){
            s =(a+b+c)/2;
            d = sqrt(s*(s-a)*(s-b)*(s-c));
            r = d/s;
            R = (a*b*c)/(4.0*d);
            CIR = pi*R*R - d;
            RED = pi * r * r ;
            TRI = d - RED;
            printf("%.4lf %.4lf %.4lf\n",CIR,TRI,RED);
    }
    return 0;
}




