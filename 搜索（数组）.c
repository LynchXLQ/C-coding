
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
	
	printf("������һ��1~9��key\n");
	scanf("%d",&key); 
	 
	int r=search(key,a,sizeof(a)/sizeof(a[0]));
	
	if(r!=-1){
    printf("��%d����Ҫ�ҵ���\n",r);
	}else{
	printf("δ�ҵ�Ҫ�ҵ�ֵ\n");	
	}

    
	system("pause");
	return 0;	
}
