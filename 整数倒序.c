#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int output=0;
	int digit;
	int origin;
	
	printf("������һ����Ҫ�����������\n");
	scanf("%d",&input);
	origin=input;
	
	do{
		digit=input%10;
		input/=10;
		output=output*10+digit;
	}while(input>0); 
	
    printf("%d�ĵ���Ϊ��%d\n",origin,output);
    
    system("pause");	
    return 0;

}


