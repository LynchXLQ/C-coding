#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int digit; 
	
	printf("������һ��Ҫ��ֵ�������\n");
	scanf("%d",&input) ;
	
	do{
		digit=input%10;
		input/=10;
		printf("%d ",digit);
	}while(input>0);
    
    printf("\n");
	 
    system("pause");	
    return 0;
	 
}

 
