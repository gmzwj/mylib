#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int add_gm(int a,int b);
int sub_gm(int a,int b);
int div_gm(int a,int b);

int main(int argc,char *argv[])
{
	int a=10 , b=5;
	int test;
	printf("%d+%d=%d\n", a, b, add_gm(a,b));
	printf("%d-%d=%d\n", a, b, sub_gm(a,b));
	printf("%d/%d=%d\n", a, b, div_gm(a,b));

	return 0;
}
