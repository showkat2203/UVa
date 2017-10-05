#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
    double A[100050],s,res,area;
    int j,t,i;
    scanf("%d",&j);
    while(j--){
        scanf("%d",&t);
        for(i=0;i<t;i++){
            scanf("%lf",&A[i]);
        }
        sort (A,A+t);
        area = 0.00;
        res=0.00;
        for(i=t-3;i>=0;i--)
        {
            if(A[i]+A[i+1]>=A[i+2])
            {
                s = (A[i]+A[i+1]+A[i+2])/2;
                area = sqrt((s*(s-A[i])*(s-A[i+1])*(s-A[i+2])));
                if(area>=res)
                {
                    res=area;
                }
            }
        }
        printf("%.2lf\n",res);
    }
    return 0;
}
