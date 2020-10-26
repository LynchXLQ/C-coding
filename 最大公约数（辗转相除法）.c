/* 
辗转相除法： 
如果b等于0，计算介绍，a就是最大公约数；
否则，计算a%b，让a等于b，而b等于那个余数；
否则回到第一步；

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
	
	printf("请输入两个数，如a b：\n");
	scanf("%d %d",&num1,&num2);
	
	while(num2!=0){
		remainder=num1%num2;
		num1=num2;
		num2=remainder;
    	printf("num1=%d  num2=%d  remainder=%d\n",&num1,&num2,&remainder);
	}
	
	printf("最大公约数是%d\n",num1);
	
	system("pause");
	return 0;	
}










