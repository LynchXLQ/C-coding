#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	const int number=10;
	int count[number];
	int i;
	
	// ��ʼ������ 
	for(i=0;i<number;i++){
		count[i]=0;
	} 
	
	printf("������һ����������-1��β��\n");
	scanf("%d",&input); 
		
	while(input!=-1){
		if(input>=0&&input<=9){
			count[input]++;	      // ����������� 
		}else{
			printf("����0~9\n");
		} 
		scanf("%d",&input);
	}
	
	// �������������
	for(i=0;i<number;i++){
		printf("%d������%d��\n",i,count[i]);
	
	} 
	
	system("pause");
	return 0;	
}


