#include <stdio.h>
#include <math.h>
int main(){
    double r,n,area,pi = 2*acos(0.0) ;
    while (scanf("%lf %lf",&r,&n)==2){
        area = ((n*r*r)*(sin ((2*pi)/n)))/2;
        printf("%.3lf\n",area);
    }
    return 0;
}
