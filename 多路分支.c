#include <stdio.h>

int main()
{
int integer;	
printf("please input an integer:");
scanf("%d",&integer);

switch(integer){
	case 1:        // case������ֹ����������У���һ��λ�ñ�־������ת 
		printf("This is 1");
		break;     // case���ֱ��break�Ż�ͣ����breakֱ�ӽ�����һ��case�ĵ�һ�� 
	case 2:
		printf("This is 2");
		break;
	case 3:
		printf("This is 3");
		break;
	case 4:
		printf("This is 4");
		break;	
	default:
	    printf("It is not 1~4,it is %d",integer);	
}

return 0;

}
