#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i; 
	int input;
	int isprime=1;    // 1=True,0=False
	
	printf("Please input an integer:\n");
	scanf("%d",&input);
	
	for(i=2;i<input;i++){ 
		if(input%i==0){	
			isprime=0;
			break;        // break����ѭ����contiune������һѭ��������һѭ��	
		}	
	}
	if (isprime==1){
		printf("This is a prime!\n");
	}
	else{
		printf("This is not a prime!\n");
	}
	
system("pause");	
return 0;

}


