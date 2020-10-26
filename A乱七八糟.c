
#include <stdio.h>
#include <stdlib.h>

void swap(int *pa,int *pb);

int main()
{
	int a=1;
	int b=10;
	
	swap(&a,&b);
	
	printf("a=%d,b=%d\n",&a,&b);
	
	system("pause");
	return 0;	
}

void swap(int *pa,int *pb)
{
	int t=*pa;
	*pa=*pb;
	*pb=t;
}
