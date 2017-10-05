#include<stdio.h>
int main()
{
    int A,B,C,i,j;
    while(scanf("%d %d %d",&A,&B,&C)==3){
    if(A==B&&B!=C){
        printf("C\n");
    }
    else if(A==C&&B!=C){
        printf("B\n");
    }
    else if(B==C&&A!=C){
        printf("A\n");
    }
    else if(A==B&&B==C){
        printf("*\n");
    }
 }
    return 0;
}
