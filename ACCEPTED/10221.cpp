#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#define pi 2.0*acos(0.0)
#define eps  1e-9

using namespace std;

int main()
{
    double rad_sat,angle,r,res,chord,arc,rad_earth;
    char A[100];
    while(scanf("%lf %lf %s",&rad_sat,&angle,A)==3)
    {
        if(strcmp(A,"min")==0)
        {
            angle=angle/60;
        }
        if(angle>180)
        {
            angle=360.0-angle;
        }
        rad_earth=6440.0;
        r=rad_earth+rad_sat;
        arc=r*angle*(pi/180)+eps;
        chord=sqrt(2.0*r*r-cos(angle*(pi/180))*2.0*r*r);
        printf("%.6lf %.6lf\n",arc,chord);
    }
    return 0;
}
