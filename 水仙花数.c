/*水仙花数
水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身（例如：1^3 + 5^3+ 3^3 = 153）
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("请输入位数：\n");
	scanf("%d",&n);
	
	int i=1;     // 计数 
	int first=1;
	while(i<n){
		first*=10;
		i++;
	}
	printf("%d位数的最小值为%d\n",n,first);
	
	// 遍历所有n位数 
	i=first;     // n位数的最小值 
	while(i<first*10) {
		int t=i;     // 用临时变量t记录i 
		int sum=0;
		do{
			int digit=t%10;
			t/=10;
			
			int j=1;     // 计数 
			int p=digit;
			while(j<n){
				p*=digit;    // 计算n次方 
				j++;
			} 
			sum+=p; 
		}while(t>0);
		if(sum==i){
			printf("%d\n",i);
		} 
		i++;	
	}

	system("pause");
	return 0;	
}










