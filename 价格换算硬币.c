#include <stdio.h>
#include <stdlib.h>

int main()
{
	int input;
	int one,two,five;
	
	printf("Please input the price:\n");
	scanf("%d",&input);
	for(one=0;one<=input*10;one++){
		for(two=0;two<=input*10/2;two++){
			for(five=0;five<=input*10/5;five++){
				if(one*1+two*2+five*5==input*10){
					printf("可以用%d个1角，%d个2角，%d个5角代替%d元\n",one,two,five,input);      
				}
			}
		}
	} 	
	
	system("pause") ;
	return 0;
	
}


