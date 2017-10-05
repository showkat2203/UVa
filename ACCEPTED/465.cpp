#include <stdio.h>
#include<string>
#include<cstring>
#include<cstdlib>
#include<stdlib.h>


using namespace std;

int main ()
{
    double a,b,i,j;
	char A [10000], B [10000], c;
	while ( scanf ("%s %c %s", A, &c, B) == 3) {
		a = atof(A);
		b = atof(B);
		printf("%s %c %s\n", A, c, B);
		if ( a > 2147483647.00 )
			printf("first number too big\n");
		if ( b > 2147483647.00)
			printf("second number too big\n");
		if ( c == '+' &&(a+b)>2147483647.00) {
			printf("result too big\n");
		}
		if(c=='*'&& (a*b) > 2147483647.00) {
            printf("result too big\n");
		}
	}
	return 0;
}



