#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	int divisor;
	int min;	
	
	printf("����������������a b��\n");
	scanf("%d %d",&num1,&num2);
	
	// �жϴ�С 
	 if(num1<num2){
	 	min=num1;
	 }else{
	 	min=num2;
	 }
	
	int i;
	
	for(i=1;i<=min;i++){
		if(num1%i==0){
			if(num2%i==0){
				divisor=i;
			}
		}
	} 
	
	
	printf("%d��%d�����Լ����%d",num1,num2,divisor);
	
	system("pause");	
	return 0;
}
