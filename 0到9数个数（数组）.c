#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	const int number=10;
	int count[number];
	int i;
	
	// 初始化数组 
	for(i=0;i<number;i++){
		count[i]=0;
	} 
	
	printf("请输入一组整数，以-1结尾：\n");
	scanf("%d",&input); 
		
	while(input!=-1){
		if(input>=0&&input<=9){
			count[input]++;	      // 数组参与运算 
		}else{
			printf("超出0~9\n");
		} 
		scanf("%d",&input);
	}
	
	// 遍历数组做输出
	for(i=0;i<number;i++){
		printf("%d出现了%d次\n",i,count[i]);
	
	} 
	
	system("pause");
	return 0;	
}


