#include <stdio.h>


int sum(int x, int y);
int average(int  (*ptf)(int, int), int a, int b);



int main(void)
{
	int (*ptsum)(int x, int y) = sum;
	int value = average(ptsum, 8,2);
	printf("%d\n", value);
	

	return 0;
}
int sum(int x, int y)
{
	return (x+y);
}
int average(int (*ptf)(int, int), int a, int b)
{
	int n = ptf(a,b);
	return n/2;
}
