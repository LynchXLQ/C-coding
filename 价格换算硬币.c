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
					printf("������%d��1�ǣ�%d��2�ǣ�%d��5�Ǵ���%dԪ\n",one,two,five,input);      
				}
			}
		}
	} 	
	
	system("pause") ;
	return 0;
	
}


