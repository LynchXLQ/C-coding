#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int digit;
	int mask=1;
	int origin;
	 
	printf("请输入一个需要拆开的整数：\n");
	scanf("%d",&input);
	origin=input;
	
	while(input>9){                        
		input/=10;
	    mask*=10;
	}
    // printf("mask=%d\n",mask);
  
    // 以下为从左往右输出每个位置上的数字  
	while(mask>0){
		digit=origin/mask;      // 取到左边第一位 
		printf("%d",digit);
		origin%=mask;
		if(mask>9){            // 使最后一个数字后面没有空格 
		    printf(" ");		    
		}
		mask/=10;				
	}
	
	printf("\n");
	 
	system("pause");	
	return 0;
	
}
