#include <stdio.h>
#include <stdlib.h>

int main()
{
	int number;
	scanf("%d",&number);
	int fact=1;
	int i=1;
	for(i=1;i<=number;i++){    // for(ѭ����ʼ������ѭ������������ѭ��ÿһ�εĶ���)
	   fact*=i;	
	}
    printf("%d!=%d",number,fact);
    
	return 0; 
	
}


