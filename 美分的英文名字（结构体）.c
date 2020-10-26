#include <stdio.h>
#include <stdlib.h>

int amount[]={1,5,10,25,50,100};
char *name[]={"penny","nickle","dime","quarter","half-dollar","dollar"}; 

struct{
	int amount;
	char *name;
}coins[]={
	{1,"penny"},
	{5,"nickle"},
	{25,"quarter"},
	{50,"half-dollar"},
	{100,"dollar"},	
};

int main()
{
	int input;
	
	printf("请输入一个漂亮国硬币面值，以分为单位（1，5，10，25，50，100）:\n");
	scanf("%d",&input);
	
	int i;
	 
	for(i=0;i<sizeof(coins)/sizeof(coins[0]);i++){
	    if(input==coins[i].amount){
	    	printf("%d漂亮分的英文名字是%s\n",input,coins[i].name);
			break;
		}
	}
	system("pause");
	return 0;	
}

