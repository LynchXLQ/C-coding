#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1;
	int num2;
	int divisor;
	int min;	
	
	printf("请输入两个数，如a b：\n");
	scanf("%d %d",&num1,&num2);
	
	// 判断大小 
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
	
	
	printf("%d和%d的最大公约数是%d",num1,num2,divisor);
	
	system("pause");	
	return 0;
}
