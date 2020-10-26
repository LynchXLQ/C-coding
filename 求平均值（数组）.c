
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum=0;
	double average=0;
	int cnt=0;
	int input;
	int number[100];
	
	printf("请输入一组整数，以-1结尾：\n");
	scanf("%d",&input);
	while(input!=-1){
		number[cnt]=input;
		sum+=input;
		cnt++;
		scanf("%d",&input);
	}
	
	printf("这些数的和为%d\n",sum-1);
	
	if(cnt>0){
		average=sum/cnt;
		printf("这些数的平均数是%.1f\n",average);
		
		int i;
		for(i=0;i<cnt;i++){
			if(number[i]>average){
				printf("超过平均值的数为%d\n",number[i]);
			}
		}
	}

	system("pause");
	return 0;	

}

