/* 
շת������� 
���b����0��������ܣ�a�������Լ����
���򣬼���a%b����a����b����b�����Ǹ�������
����ص���һ����

num1  num2    remainder
12    18      12
18    12      6
12    6       0
6     0     
*/ 

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	int remainder;	
	
	printf("����������������a b��\n");
	scanf("%d %d",&num1,&num2);
	
	while(num2!=0){
		remainder=num1%num2;
		num1=num2;
		num2=remainder;
    	printf("num1=%d  num2=%d  remainder=%d\n",&num1,&num2,&remainder);
	}
	
	printf("���Լ����%d\n",num1);
	
	system("pause");
	return 0;	
}










