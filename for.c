#include <stdio.h>
void swap(int a, int b):
int main()
{
	int a=5;
	int b=10;

	printf("befor change a: %d b: %d \n",a,b);

	swap(&a,&b);
	printf("after change a: %d b: %d \n",a,b);
}
void swap(int*a, int *b)
{
	int temp;

	temp=*a;
	*a=*b;
	*b=temp;
}
