#include<stdio.h>
#include<string.h>
int MAX(int a, int b) {
	if (a > b)
	return a;
	else	
	return b;
}
int main()
{
	int a = 10;
	int b = 20;
	int max = 0;
	printf("%d", max = MAX(a, b));
	return 0;
}