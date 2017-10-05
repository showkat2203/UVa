#include<stdio.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int a,A[3020],B[3030],i,j,cnt;
    while(scanf("%d",&a)==1){
            cnt=1;
    for(i=0;i<a;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<a-1;i++){
            B[i]=abs(A[i+1]-A[i]);
            }
            sort(B,B+i);
    for(i=1;i<a;i++){
        if(B[i]==B[i-1]){
                cnt=0;
            break;
        }
     }
        if (cnt==0){
            printf("Not jolly\n");
        }
        else{
            printf("Jolly\n");
        }
   }
    return 0;
}


