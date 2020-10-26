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
	
	printf("请输入一个漂亮国硬币面值，以分为单位（1，5，10，25，50，100）\n");
	scanf("%d",&input);
	
	int r=search(input,amount,sizeof(amount)/sizeof(amount[0]));
	
    if(r!=-1){
    	printf("%d漂亮分的英文名字是%s",input,name[r]);
	}else{
		printf("漂亮国无此面值的硬币，请仔细审题！\n");
	}
	
	system("pause");
	return 0;	
}
