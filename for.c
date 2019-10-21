#include <stdio.h>
void swap(int pa, int pb):
int main()
{
	int pa=5;
	int pb=10;

	printf("befor change a: %d b: %d \n",pa,pb);

	swap(&pa,&pb);
	printf("after change a: %d b: %d \n",pa,pb);
}
void swap(int*pa, int *pb)
{
	int temp;

	temp=*pa;
	*pa=*pb;
	*pb=temp;
}
