#include<stdio.h>
int main()
{
    int i,j,k,l,m,cnt=1;
    char A[200],B[200],C[200],D[200],E[200],F[200],G[200],H[200],I[200],J[200];
    int M[15];
    scanf("%d",&j);
    while(j--){
        int maxi=0;
        scanf("%s %d",A,&M[0]);
        scanf("%s %d",B,&M[1]);
        scanf("%s %d",C,&M[2]);
        scanf("%s %d",D,&M[3]);
        scanf("%s %d",E,&M[4]);
        scanf("%s %d",F,&M[5]);
        scanf("%s %d",G,&M[6]);
        scanf("%s %d",H,&M[7]);
        scanf("%s %d",I,&M[8]);
        scanf("%s %d",J,&M[9]);
        for(i=0;i<10;i++){
            if(M[i]>maxi){
                maxi=M[i];
            }
        }
        printf("Case #%d:\n",cnt++);
        for(k=0;k<10;k++){
            if(M[k]==maxi){
                if(k==0){
                    printf("%s\n",A);
                }
                if(k==1){
                    printf("%s\n",B);
                }
                if(k==2){
                    printf("%s\n",C);
                }
                if(k==3){
                    printf("%s\n",D);
                }
                if(k==4){
                    printf("%s\n",E);
                }
                if(k==5){
                    printf("%s\n",F);
                }
                if(k==6){
                    printf("%s\n",G);
                }
                if(k==7){
                    printf("%s\n",H);
                }
                if(k==8){
                    printf("%s\n",I);
                }
                if(k==9){
                    printf("%s\n",J);
                }
            }
        }
     }
    return 0;
}
