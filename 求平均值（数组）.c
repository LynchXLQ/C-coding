
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sum=0;
	double average=0;
	int cnt=0;
	int input;
	int number[100];
	
	printf("������һ����������-1��β��\n");
	scanf("%d",&input);
	while(input!=-1){
		number[cnt]=input;
		sum+=input;
		cnt++;
		scanf("%d",&input);
	}
	
	printf("��Щ���ĺ�Ϊ%d\n",sum-1);
	
	if(cnt>0){
		average=sum/cnt;
		printf("��Щ����ƽ������%.1f\n",average);
		
		int i;
		for(i=0;i<cnt;i++){
			if(number[i]>average){
				printf("����ƽ��ֵ����Ϊ%d\n",number[i]);
			}
		}
	}

	system("pause");
	return 0;	

}

