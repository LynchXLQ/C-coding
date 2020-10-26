#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	srand(time(0));
	int number=rand()%100;
	int count=0;
	int a=0;
	printf("快点想一个数，蠢货！\n"); 
	do{
		scanf("%d/n",&a);
		count++;
		if(a>number){
		printf("你猜大了！大了%d\n",a-number);
	    }
		else if(a<number){
		printf("你猜小了！小了%d\n",number-a);	
		}  
}
while(a!=number);
printf("你特娘的真是个小天才，就是%d!你猜了%d次！",number,count);

system("pause");

return 0;








}
