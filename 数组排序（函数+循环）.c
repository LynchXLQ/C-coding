#include <stdio.h>
#include <stdlib.h>

int max(int a[],int len){
	int maxid=0;
	int i; 
	for(i=1;i<len;i++){
		if(a[i]>a[maxid]){
			maxid=i; 
		}
	}
	return maxid;
}

int main()
{
	int a[]={11,33,22,44,66,55,99,77,88,};
	int len=sizeof(a)/sizeof(a[0]);
	
	// ÅÅÐò
	int m=len-1; 
	for(m;m>0;m--){
		int maxid=max(a,m+1);
		int t=a[maxid];
		a[maxid]=a[m];
		a[m]=t;
	}
	
	// Êä³ö
	int n;
	for(n=0;n<len;n++){
		printf("%d ",a[n]);
	} 
	
	system("pause");
	return 0;	
}
