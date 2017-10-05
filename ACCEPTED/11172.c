#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d",&j);
    for(i=1;i<=j;i++){
         scanf("%d %d",&a,&b);
    if(a>b){
        printf(">\n");}
    else if(a<b){
        printf("<\n");
                }
    else if(a==b){
    printf("=\n");
        }
    }
    return 0;
}
