#include <stdio.h>

int main()
{
int integer;	
printf("please input an integer:");
scanf("%d",&integer);

switch(integer){
	case 1:        // case不会阻止程序继续进行，是一个位置标志用来跳转 
		printf("This is 1");
		break;     // case语句直到break才会停，无break直接进入下一个case的第一句 
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
