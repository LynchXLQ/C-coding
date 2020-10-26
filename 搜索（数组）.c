
#include <stdio.h>
#include <stdlib.h>

int search(int key,int a[],int len){
	int ret=-1;
	int i=0;
	for (i=0;i<len;i++){
		if(key==a[i]){
			ret=i+1;
			break;
		}
	}
	return ret; 
}

int main()
{
	int key;
	int a[]={1,2,3,4,5,6,7,8,9,};
	
	printf("请输入一个1~9的key\n");
	scanf("%d",&key); 
	 
	int r=search(key,a,sizeof(a)/sizeof(a[0]));
	
	if(r!=-1){
    printf("第%d个是要找的数\n",r);
	}else{
	printf("未找到要找的值\n");	
	}

    
	system("pause");
	return 0;	
}
