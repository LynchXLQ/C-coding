#include <stdio.h>

int main()
{
int foot=0;   // double foot; double inch (double表示双精度浮点数)
int inch=0;

printf("请输入英尺数\n");
scanf("%d",&foot) ;   // 用double定义，输入时scanf("%lf",&foot)，printf("%f",&foot) 

printf("请输入英寸数\n");
scanf("%d",&inch);

printf("身高为%f米",((foot+inch/12.0)*0.3048));

return 0; 
}
