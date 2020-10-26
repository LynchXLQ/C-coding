#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	int i;
	double sum=0; 
	
	printf("f(n)=1+1/2+1/3+...+1/n,请输入f(n)中的自变量n：\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=1.0/i; 
	}
	
	printf("f(%d)=%f\n",n,sum);	
	
    system("pause");	
    return 0;

}

 
