#include<cstdio>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<algorithm>

using namespace std;

int main()
{
    long long i,j,k;
    double x,y,r,area,shortest,longest;
    scanf("%lld",&j);
    while(j--)
    {
        scanf("%lf %lf %lf",&x,&y,&r);
        area = sqrt((x*x + y*y));
        shortest = r - area;
        longest = r + area;
        printf("%.2lf %.2lf\n",shortest,longest);
    }
    return 0;
}

