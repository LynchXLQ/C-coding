#include <stdio.h>
#include <stdlib.h>

int amount[]={1,5,10,25,50,100};
char *name[]={"penny","nickle","dime","quarter","half-dollar","dollar"}; 


int search(int key,int a[],int len){
	int ret=-1;
	int i=0;
	for (i=0;i<len;i++){
		if(key==a[i]){
			ret=i;
			break;
		}
	}
	return ret; 
}

int main()
{
	int input;
	
	printf("������һ��Ư����Ӳ����ֵ���Է�Ϊ��λ��1��5��10��25��50��100��\n");
	scanf("%d",&input);
	
	int r=search(input,amount,sizeof(amount)/sizeof(amount[0]));
	
    if(r!=-1){
    	printf("%dƯ���ֵ�Ӣ��������%s",input,name[r]);
	}else{
		printf("Ư�����޴���ֵ��Ӳ�ң�����ϸ���⣡\n");
	}
	
	system("pause");
	return 0;	
}
