#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(0));
	int number=rand()%100;
	int count=0;
	int a=0;
	printf("�����һ������������\n"); 
	do{
		scanf("%d/n",&a);
		count++;
		if(a>number){
		printf("��´��ˣ�����%d\n",a-number);
	    }
		else if(a<number){
		printf("���С�ˣ�С��%d\n",number-a);	
		}  
}
while(a!=number);
printf("����������Ǹ�С��ţ�����%d!�����%d�Σ�",number,count);

system("pause");

return 0;








}
