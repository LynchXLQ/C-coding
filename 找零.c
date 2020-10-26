#include <stdio.h>
#include <stdlib.h>

int main()
{
int price=0;   //定义常量 const int AMOUNT=100，一般const变量全大写 
int bill=0;

printf("请输入给出的价格（元）：");
scanf("%d/n",&bill);            //在scanf内，必须加&在变量名字前 

printf("请输入物品价格（元）："); 
scanf("%d/n",&price);             //在scanf内，必须加&在变量名字前 
  
if(bill>=price){
	printf("找零%d元",bill-price);
}
else{
	printf("滚开，穷鬼，还差%d元",price-bill);
}

system("pause");
return 0;

}


