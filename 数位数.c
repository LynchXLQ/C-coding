#include <stdio.h>

int main()
{
int n=1;
int integer;

printf("Please input an integer:");
scanf("%d",&integer);
integer/=10;
while(integer>0){
	n++;
	integer/=10;
}

printf("这是一个%d位数",n);
 
return 0; 
}
