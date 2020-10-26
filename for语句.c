#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	scanf("%d",&number);
	int fact=1;
	int i=1;
	for(i=1;i<=number;i++){    // for(循环初始条件；循环继续条件；循环每一次的动作)
	   fact*=i;	
	}
    printf("%d!=%d",number,fact);
    
	return 0; 
	
}


