#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int output=0;
	int digit;
	int origin;
	
	printf("请输入一个需要逆序的整数：\n");
	scanf("%d",&input);
	origin=input;
	
	do{
		digit=input%10;
		input/=10;
		output=output*10+digit;
	}while(input>0); 
	
    printf("%d的倒序为：%d\n",origin,output);
    
    system("pause");	
    return 0;

}


