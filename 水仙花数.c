/*ˮ�ɻ���
ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵������������磺1^3 + 5^3+ 3^3 = 153��
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;
	printf("������λ����\n");
	scanf("%d",&n);
	
	int i=1;     // ���� 
	int first=1;
	while(i<n){
		first*=10;
		i++;
	}
	printf("%dλ������СֵΪ%d\n",n,first);
	
	// ��������nλ�� 
	i=first;     // nλ������Сֵ 
	while(i<first*10) {
		int t=i;     // ����ʱ����t��¼i 
		int sum=0;
		do{
			int digit=t%10;
			t/=10;
			
			int j=1;     // ���� 
			int p=digit;
			while(j<n){
				p*=digit;    // ����n�η� 
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










