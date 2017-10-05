#include <stdio.h>
#include <string>
#include <string.h>

using namespace std;

int main(){

    int i, j, k, test, kase = 0;
    char ch[100][100];
    int array[100][100];
    int m, n;
    scanf("%d", &test);
    getchar();
    while(test--){
        getchar();
        m = 0;
        gets(ch[m]);
        while(ch[m][0]!='\0'){
                m++;
            gets(ch[m]);
        }
        printf("input finsih\n");
        for( i=0 ; i<m ; i++ ) printf("%s\n",ch[i]);

    }
    return 0;
}
