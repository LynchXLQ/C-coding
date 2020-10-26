#include <stdio.h>

int main()
{
int a;
int b;
printf("请输入两个数来求其平均值：");
scanf("%d %d",&a,&b) ;
double c=(a+b)/2.0;
printf("平均值为%f",c);
return 0;
}
