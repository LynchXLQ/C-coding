#include <stdio.h>

int main()
{
int hour1,minute1;
int hour2,minute2;
	
printf("������ʱ��1\n");
scanf("%d %d",&hour1,&minute1);

printf("������ʱ��2\n");
scanf("%d %d",&hour2,&minute2);

int a=hour1*60+minute1;
int b=hour2*60+minute2;
int c=a-b;

printf("ʱ��1��ʱ��2����%dСʱ%d����",c/60,c%60);
return 0;
}
