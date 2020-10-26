#include <stdio.h>

int main()
{
int hour1,minute1;
int hour2,minute2;
	
printf("请输入时间1\n");
scanf("%d %d",&hour1,&minute1);

printf("请输入时间2\n");
scanf("%d %d",&hour2,&minute2);

int a=hour1*60+minute1;
int b=hour2*60+minute2;
int c=a-b;

printf("时间1比时间2多了%d小时%d分钟",c/60,c%60);
return 0;
}
