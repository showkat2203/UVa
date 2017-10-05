#include<stdio.h>
#include<string.h>
int main()
{
    long int i,cnt=0,l;
    char s[10000];
    while(gets(s)){
        l=strlen(s);
        for(i=0;i<l;i++){
            if(s[i]=='"'){
                cnt=cnt+1;
                if(cnt%2==1){
                    printf("``");
                }
                else{
                    printf("''");
                }
            }
            else
                printf("%c",s[i]);
            }
        printf("\n");
    }
    return 0;
}
