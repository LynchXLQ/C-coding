#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int digit;
	int mask=1;
	int origin;
	 
	printf("������һ����Ҫ�𿪵�������\n");
	scanf("%d",&input);
	origin=input;
	
	while(input>9){                        
		input/=10;
	    mask*=10;
	}
    // printf("mask=%d\n",mask);
  
    // ����Ϊ�����������ÿ��λ���ϵ�����  
	while(mask>0){
		digit=origin/mask;      // ȡ����ߵ�һλ 
		printf("%d",digit);
		origin%=mask;
		if(mask>9){            // ʹ���һ�����ֺ���û�пո� 
		    printf(" ");		    
		}
		mask/=10;				
	}
	
	printf("\n");
	 
	system("pause");	
	return 0;
	
}
